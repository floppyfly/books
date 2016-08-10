#include <stdio.h>
int main(void){
	int i=1,j=1,sum=0,sum1=0;
	while(i<=100){
		if(i%2==0){
			sum=sum+i;
		}
		i=i+1;
	}
	printf("ou shu de he shi %d\n",sum);
	while(j<=100){
		if(j%2==1){
			sum1=sum1+j;
		}
		j=j+1;
	}
	printf("ji shu de he shi %d\n",sum1);
	printf("zong he shi %d\n",sum+sum1);

	return 0;
}
