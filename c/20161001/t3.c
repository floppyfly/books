#include <stdio.h>
void say(void);
int max(int a,int b,int c);
int main(void)
{
	int p,x,y,z;
	say();
	scanf("%d,%d,%d",&x,&y,&z);
	p=max(x,y,z);
	printf("max is %d\n",p);

	return 0;
}
int max(int a,int b,int c){
	int max=a;
	if(max<b) max=b;
	if(max<c) max=c;
	
	return max;
}
void say (void)
{
	printf("Enter three numbers: ");
}
