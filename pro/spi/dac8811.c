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

float freq = 1000000;
int fd;
int level = 0;

struct timeval timeold,timenew;

#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))

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
	/*if (ret == 1)
		pabort("can't send spi message");

	for (ret = 0; ret < ARRAY_SIZE(tx); ret++) {
		if (!(ret % 6))
			puts("");
		printf("%.2X ", rx[ret]);
	}
	puts("");*/
}

int main(int argc, char *argv[])
{
	int ret = 0;
	int fd;

	int temp1,temp2;
	/*sscanf(argv[1],"%u",&temp1);
	sscanf(argv[2],"%u",&temp2);
	sscanf(argv[3],"%f",&freq);
	tx[0] = (unsigned char)temp1;
	tx[1] = (unsigned char)temp2;*/

	fd = open(device, O_RDWR);
	if (fd < 0)
		pabort("can't open device");

	/*
	 * spi mode
	 */
	ret = ioctl(fd, SPI_IOC_WR_MODE, &mode);
	if (ret == -1)
		pabort("can't set spi mode");

	ret = ioctl(fd, SPI_IOC_RD_MODE, &mode);
	if (ret == -1)
		pabort("can't get spi mode");

	/*
	 * bits per word
	 */
	ret = ioctl(fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
	if (ret == -1)
		pabort("can't set bits per word");

	ret = ioctl(fd, SPI_IOC_RD_BITS_PER_WORD, &bits);
	if (ret == -1)
		pabort("can't get bits per word");

	/*
	 * max speed hz
	 */
	ret = ioctl(fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
	if (ret == -1)
		pabort("can't set max speed hz");

	ret = ioctl(fd, SPI_IOC_RD_MAX_SPEED_HZ, &speed);
	if (ret == -1)
		pabort("can't get max speed hz");

	printf("spi mode: %d\n", mode);
	printf("bits per word: %d\n", bits);
	printf("max speed: %d Hz (%d KHz)\n", speed, speed/1000);
	
	double data[20];
	char datah[20],datal[20];
	int i,j;
	
	for(i=0;i<20;i++)
	{
		data[i] = i/20.0;
		datah[i] = (unsigned char)(data[i]*4095.0/256);
		datah[i] = datah[i]&0x0f;
		datah[i] = datah[i]&0x4f;
		datal[i] = (unsigned char)((unsigned char)data[i]*4095%256);
	}
	i = 0,j=0;

	while(1)
	{
		tx[0] = i;
		tx[1] = j;
		transfer(fd);
		i++;
		if(i == 256)
		{
			i=0;
			j++;
			if(j == 256)
				j=0;
		}
	}

	close(fd);

	return ret;
}
