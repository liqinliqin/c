#include <stdio.h>
#include <sys/types.h>
#include <netinet/ip.h>
#include <netinet/udp.h>
#include <string.h>
#include <stdio.h>
#include <sys/time.h>
#define TSFT(present) (present&0x00000001?4:0)

int main(){
	struct timeval tb,ta;
	int i;
	gettimeofday(&tb,NULL);
	for(i=0;i<100;i++)
	{
	}
	gettimeofday(&ta,NULL);
	printf("timeval:%ld.%06ld\n",(long int)ta.tv_sec,(long int)ta.tv_usec);
	return 0;
}
