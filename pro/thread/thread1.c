#include <pthread.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <linux/rtc.h>
#include <linux/ioctl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

float freq;
int fd;
int level = 0;

struct timeval timeold,timenew;

void thread1(void)
{
	while(1)
	{
		printf("This is a pthread1.\n");
		sleep(1);
	}
}

void thread2(void)
{
	int retval;
	while(1)
	{
		gettimeofday(&timenew,NULL);
		if(timenew.tv_usec - timeold.tv_usec >= 500000/freq  || 
			((timenew.tv_usec + 1000000 - timeold.tv_usec >= 500000/freq ) && (timenew.tv_usec < timeold.tv_usec)))
		{
			timeold = timenew;
			retval=ioctl(fd,level,0);
			level = !level;
			if(retval==-1)
			{
				perror("ioctl error\n");
				exit(-1);
			}
		}
	}
}

int main(int argc, char** argv)
{
	sscanf(argv[1],"%f",&freq);
	pthread_t id1,id2;
	int i,ret;
	ret=pthread_create(&id1,NULL,(void*) thread1,NULL);
	if(ret!=0)
	{
			printf("Create pthread error!\n");
			exit(1);
	}

	ret=pthread_create(&id2,NULL,(void*) thread2,NULL);
	if(ret!=0)
	{
			printf("Create pthread error!\n");
			exit(1);
	}
	
	int retval;
	fd=open("/dev/dac904",O_RDWR);
	if(fd==-1)
	{
		perror("error open\n");
		exit(-1);
	}
	printf("open /dev/dac904 successfully\n");
	pthread_join(id1,NULL);
	gettimeofday(&timeold,NULL);
	pthread_join(id2,NULL);
	close(fd);
	exit(0);
}
