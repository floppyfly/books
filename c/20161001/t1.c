#include <stdio.h>
int max(int a,int b);
void dazhaohu(void);
int main(void)
{
	int m,n;
	scanf("%d %d",&m,&n);
	int q;
	q=max(m,n);
	printf("%d\n",q);
	dazhaohu();
	return 0;
}	
int max(int a,int b)
{
	if(a<b) return b;
	else return a;
}
void dazhaohu(void)
{
	printf("Hi dajiahao\n");
}
