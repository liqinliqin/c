#include <stdio.h>
int main(){
	unsigned int a:2;
	printf("%d\n",sizeof(a)/(sizeof(int)/32));
	return 0;
}
