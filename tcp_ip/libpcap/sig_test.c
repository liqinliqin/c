#include <stdio.h>
#include <math.h>
float mean(int *h,int size){
	int sum=0;
	int i;
	for(i=0;i<size;i++)
	{
		sum+=h[i];
	}
	return sum/(float)size;
}
float sig(int *h,int size,float mean){
	float sum=0;
	int i;
	for(i=0;i<size;i++)
	{
		sum+=pow((h[i]-mean),2);
	}
	sum=sum/(float)size;
	return sqrt(sum);
}
int main(){
	int h[6]={73,72,71,69,68,67};
	float m1;
	float sv1;
	m1=mean(h,6);
	sv1=sig(h,6,m1);
	printf("%.2f\n",m1);
	printf("%.2f\n",sv1);
	return 0;
}
