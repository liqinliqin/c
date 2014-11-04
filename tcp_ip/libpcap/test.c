#include <stdio.h>
#include <sys/types.h>
#include <netinet/ip.h>
#include <netinet/udp.h>
#include <string.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/socket.h>
#include <sys/types.h>
#define TSFT(present) (present&0x00000001?4:0)

int main(int argc,char *argv[]){
	int i,j;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\n",j);
			if(j==3){
				continue;
			}
		}
	}
	return 0;
}
