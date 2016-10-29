#include <stdio.h>
void fa(int a[],int n){
	while(n>0){
		n--;
		printf("%d\n",a[n]);
	}
}
void jh(int *pit,int *pon){
	int temp;
	temp=*pit;
	*pit=*pon;
	*pon=temp;
}
int main(void){
	int a=3,b=33;
	jh(&a,&b);
	printf("%d,%d\n",a,b);
	int m[3]={3,33,333};
	fa(m,3);

	return 0;
}
