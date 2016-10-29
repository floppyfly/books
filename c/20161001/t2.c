#include <stdio.h>
void xxx(void);
int zuixiao(int a,int b);
int main(void)
{
	int x,y;
	scanf("%d %d",&x,&y);
	int v;
	v=zuixiao(x,y);
	printf("%d\n",v);
	xxx();
}
int zuixiao(int a,int b)
{
	if(a>b) return b;
	else return a;
}
void xxx(void)
{
	printf("i am floppyfly\n");
}
