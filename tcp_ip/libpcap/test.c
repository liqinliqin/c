#include <stdio.h>
#include <sys/types.h>

#define TSFT(present) (present&0x00000001?4:0)

int main(){
	u_int32_t present=0x00000003;
	printf("%d\n",TSFT(present));
	return 0;
}
