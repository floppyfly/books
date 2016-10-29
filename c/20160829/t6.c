#include <stdio.h>
int max(int a,int b);

int max1(int a,int b);

int main(void)
{
	int x=10,y=22;
	int z;
	z=max(x,y);
	printf("%d\n",z);
	int m=max1(x,y);
	printf("%d\n",m);

	return 0;
}

int max(int a,int b)
{
if(a>b){
	return a;
}
else{
	return b;
}
}
int max1(int a,int b)
{
	int max=a;
	if(max<b)
		max=b;

	return max;
}
