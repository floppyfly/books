#include <stdio.h>
int find_max(int a,int b,int c);
int main(void)
{
	int i,n1,n2,n3;
	scanf("%d,%d,%d",&n1,&n2,&n3);
	i=find_max(n1,n2,n3);
	printf("%d\n",i);
}
int find_max(int a,int b,int c)
{
	int max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	return max;
}
