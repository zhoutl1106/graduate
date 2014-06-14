#ifndef DA_H
#define DA_H

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

class DA
{
public:
    DA();
    void daInit();
    void daSend(unsigned char H, unsigned char L);
    void daSendFrameHeader();
    void daClose();
    void daCS0();
    void daCS1();

private:
    int fd_cs;
    int fd_spi;
    uint8_t mode;
    uint8_t bits;
    uint32_t speed;
    uint16_t delay;
    uint8_t tx[2];
    uint8_t rx[2];
};

#endif // DA_H
