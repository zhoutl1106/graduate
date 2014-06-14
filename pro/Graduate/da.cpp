#include "da.h"

#define CS_1 ioctl(fd_cs,0,0)
#define CS_0 ioctl(fd_cs,1,0)

DA::DA()
{
}

void DA::daInit()
{
    bits = 8;
    speed = 1500000;
    delay = 1;
    tx[0] = 0x12;
    tx[1] = 0x5a;
    rx[0] = 0;
    rx[1] = 0;

    int ret;
    fd_cs = open("/dev/cs",O_RDWR);
    if(fd_cs==-1)
      {
         perror("error open cs\n");
         exit(-1);
      }
    printf("open /dev/cs successfully\n");

    fd_spi = open("/dev/spidev1.0", O_RDWR);
    if (fd_spi < 0)
        printf("can't open device");

    /*
     * spi mode
     */
    ret = ioctl(fd_spi, SPI_IOC_WR_MODE, &mode);
    if (ret == -1)
        printf("can't set spi mode");

    ret = ioctl(fd_spi, SPI_IOC_RD_MODE, &mode);
    if (ret == -1)
        printf("can't get spi mode");

    /*
     * bits per word
     */
    ret = ioctl(fd_spi, SPI_IOC_WR_BITS_PER_WORD, &bits);
    if (ret == -1)
        printf("can't set bits per word");

    ret = ioctl(fd_spi, SPI_IOC_RD_BITS_PER_WORD, &bits);
    if (ret == -1)
        printf("can't get bits per word");

    /*
     * max speed hz
     */
    ret = ioctl(fd_spi, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
    if (ret == -1)
        printf("can't set max speed hz");

    ret = ioctl(fd_spi, SPI_IOC_RD_MAX_SPEED_HZ, &speed);
    if (ret == -1)
        printf("can't get max speed hz");
    ret=CS_0;
    if(ret==-1)
    {
        perror("ioctl error\n");
        exit(-1);
    }
}

void DA::daSend(unsigned char H, unsigned char L)
{
    tx[0] = H;
    tx[1] = L;
    int ret;

    struct spi_ioc_transfer tr;
    tr.tx_buf = (unsigned long)tx;
    tr.rx_buf = (unsigned long)rx;
    tr.len = 2;
    tr.delay_usecs = delay;
    tr.speed_hz = speed;
    tr.bits_per_word = bits;

    ret = ioctl(fd_spi, SPI_IOC_MESSAGE(1), &tr);
}

void DA::daClose()
{
    close(fd_spi);
    close(fd_cs);
}

void DA::daCS0()
{
    CS_0;
    printf("CS_0\n");
}

void DA::daCS1()
{
    CS_1;
    printf("CS_1\n");
}

void DA::daSendFrameHeader()
{
    tx[0] = 0x55;
    tx[1] = 0xaa;
    int ret;

    struct spi_ioc_transfer tr;
    tr.tx_buf = (unsigned long)tx;
    tr.rx_buf = (unsigned long)rx;
    tr.len = 2;
    tr.delay_usecs = delay;
    tr.speed_hz = speed;
    tr.bits_per_word = bits;

    ret = ioctl(fd_spi, SPI_IOC_MESSAGE(1), &tr);
}
