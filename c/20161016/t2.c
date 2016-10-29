#include <stdio.h>
double ncifang(double x,int n);
int main(void){
	double temp,x;
	int y;
	printf("Enter 2 numbers: ");
	scanf("%lf %d",&x,&y);
	temp=ncifang(x,y);
	printf("%f\n",temp);
}
double ncifang(double x,int n){
	double temp=1.0;
	while(n-->0){
		temp*=x;
	}
	return temp;
}

