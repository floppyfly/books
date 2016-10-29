#include <stdio.h>
int find_min(int a,int b,int c);
void said2(int n,char *s);
void said1(int n);
void said(void);
int main(void)
{
	int p,x,y,z;
	said2(3,"floppyfly");
	scanf("%d %d %d",&x,&y,&z);
	p=find_min(x,y,z);
	printf("min is %d\n",p);

	return 0;
}
int find_min(int a,int b,int c)
{
	int min=a;
	if(min>b) min=b;
	if(min>c) min=c;

	return min;
}
void said1(int n)
{
	printf("Enter %d numbers: ",n);
}
void said(void)
{
	printf("Enter three numbers: ");
}
void said2(int n,char *s)
{
	printf("Hi %s,Enter %d numbers: ",s,n);
}
