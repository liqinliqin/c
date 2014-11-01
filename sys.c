#include <unistd.h>
#include <stdio.h>
#include <limits.h>
int main(){
	sysconf(_SC_NRPROCESSORS_ONLN);
	return 0;
}
