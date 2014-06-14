/*
 * SPI testing utility (using spidev driver)
 *
 * Copyright (c) 2007  MontaVista Software, Inc.
 * Copyright (c) 2007  Anton Vorontsov <avorontsov@ru.mvista.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License.
 *
 * Cross-compile with cross-gcc -I/path/to/cross-kernel/include
 */

#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>
#include <linux/rtc.h>
#include <sys/time.h>
#include <math.h>
#include<sys/types.h>
#include<linux/rtc.h>
#include<linux/ioctl.h>

float freq = 1000000;
int fd;
int level = 0;

#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))
#define CS_1 ioctl(fd_cs,0,0)
#define CS_0 ioctl(fd_cs,1,0)

static void pabort(const char *s)
{
	perror(s);
	abort();
}

static const char *device = "/dev/spidev1.0";
static uint8_t mode;
static uint8_t bits = 8;
static uint32_t speed = 1500000;
static uint16_t delay = 1;

uint8_t tx[] = {
	0x12, 0x5A
};

uint8_t rx[ARRAY_SIZE(tx)] = {0, };


	
static void transfer(int fd)
{
	int ret;

	struct spi_ioc_transfer tr = {
		.tx_buf = (unsigned long)tx,
		.rx_buf = (unsigned long)rx,
		.len = ARRAY_SIZE(tx),
		.delay_usecs = delay,
		.speed_hz = speed,
		.bits_per_word = bits,
	};
	ret = ioctl(fd, SPI_IOC_MESSAGE(1), &tr);
}

int main(int argc, char *argv[])
{
	int ret = 0;
	int fd_cs,fd_spi;
	int arg;
	unsigned int length;
	sscanf(argv[1],"%d",&arg);
	sscanf(argv[2],"%u",&length);

	fd_cs = open("/dev/cs",O_RDWR);
	if(fd_cs==-1)
	  {
	     perror("error open cs\n");
	     exit(-1);
	  }
  	printf("open /dev/cs successfully\n");
	
	fd_spi = open(device, O_RDWR);
	if (fd < 0)
		pabort("can't open device");

	/*
	 * spi mode
	 */
	ret = ioctl(fd_spi, SPI_IOC_WR_MODE, &mode);
	if (ret == -1)
		pabort("can't set spi mode");

	ret = ioctl(fd_spi, SPI_IOC_RD_MODE, &mode);
	if (ret == -1)
		pabort("can't get spi mode");

	/*
	 * bits per word
	 */
	ret = ioctl(fd_spi, SPI_IOC_WR_BITS_PER_WORD, &bits);
	if (ret == -1)
		pabort("can't set bits per word");

	ret = ioctl(fd_spi, SPI_IOC_RD_BITS_PER_WORD, &bits);
	if (ret == -1)
		pabort("can't get bits per word");

	/*
	 * max speed hz
	 */
	ret = ioctl(fd_spi, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
	if (ret == -1)
		pabort("can't set max speed hz");

	ret = ioctl(fd_spi, SPI_IOC_RD_MAX_SPEED_HZ, &speed);
	if (ret == -1)
		pabort("can't get max speed hz");

	printf("spi mode: %d\n", mode);
	printf("bits per word: %d\n", bits);
	printf("max speed: %d Hz (%d KHz)\n", speed, speed/1000);
	
	ret=CS_0;
	if(ret==-1)
	{
		perror("ioctl error\n");
		exit(-1);
	}
	printf("CS_0\n");
	
	unsigned char* datah = malloc(length*sizeof(unsigned char));
	unsigned char* datal = malloc(length*sizeof(unsigned char));;
	int i;
	
	for(i=0;i<length;i++)
	{
		datah[i] = i*4095/length/256;
		datah[i] = datah[i]&0x0f;
		datah[i] = datah[i]|0x40;
		datal[i] = i*4095/length%256;
	}
	

	i = 0;
	// frame header
	tx[0] = 0x55;
	tx[1] = 0xaa;
	transfer(fd_spi);
	//data length
	tx[0] = length/256;
	tx[1] = length%256;
	transfer(fd_spi);
	
	if(0==arg)
		for(i=0;i<length;i++)
		{
			tx[0] = datah[i];
			tx[1] = datal[i];
			transfer(fd_spi);
			printf("%u,%x,%x\n",i,datah[i],datal[i]);
		}
	if(1==arg)
		for(i=0;i<length;i++)
		{
			tx[0] = 0xff;
			tx[1] = 0xff;
			transfer(fd_spi);
		}
	if(2==arg)
	{	
		tx[0] = 0x55;
		tx[1] = 0xaa;
		transfer(fd_spi);
	}
	if(3==arg)
		for(i=0;i<length;i++)
		{
			tx[0] = 0x55;
			tx[1] = 0x55;
			transfer(fd_spi);
		}
	if(4==arg)
		for(i=0;i<length;i++)
		{
			tx[0] = (i+1)/16;
			tx[1] = (i+1)%16;
			transfer(fd_spi);
		}
	getchar();
	CS_1;
	printf("CS_1\n");
	getchar();
	CS_0;
	printf("CS_0\n");
	getchar();
	CS_1;
	printf("CS_1\n");
	close(fd_spi);
	close(fd_cs);

	return ret;
}
