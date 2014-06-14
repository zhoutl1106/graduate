#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>

unsigned int j = 0,i = 0;
void prompt_info(int signo)
{
	i++;
}

void init_sigaction(void)
{
	struct sigaction act;
	act.sa_handler = prompt_info;
	act.sa_flags = 0;
	sigemptyset(&act.sa_mask);
	sigaction(SIGPROF,&act,NULL);
}

void init_timer()
{
	struct itimerval value;
	value.it_value.tv_sec=0;
	value.it_value.tv_usec=1000;
	value.it_interval=value.it_value;
	setitimer(ITIMER_PROF,&value,NULL);
}
	

int main()
{
	init_sigaction();
	init_timer();
	while(1)
	{
		if(i == 1000)
		{
			i=0;
			j++;
			printf("Timer %d\n",j);
		}
	}
	exit(0);
	
}
