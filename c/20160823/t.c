#include <stdio.h>
int main(void)
{
	double vx,vy;
	puts("Enter two numbers");
	printf("1: ");
	scanf("%lf",&vx);
	printf("2: ");
	scanf("%lf",&vy);

	printf("%.2f+%.2f=%.2f\n",vx,vy,vx+vy);
	printf("%.2f-%.2f=%.2f\n",vx,vy,vx-vy);
	printf("%.2f*%.2f=%.2f\n",vx,vy,vx*vy);
	printf("%.2f/%.2f=%.2f\n",vx,vy,vx/vy);

	return 0;
}
