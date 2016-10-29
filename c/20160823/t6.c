#include <stdio.h>
int main(void)
{
	double i,j;
	printf("sheng gao[>100]:");
	scanf("%lf",&i);
	if(i<100)
		printf("chao chu fan wei\n");
	else{
		j=(i-100)*0.9;
		printf("ti zhuong :%.1f\n",j);
	}

	return 0;
}
