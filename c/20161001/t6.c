#include <stdio.h>
int he(int a,int b);
void say(char *s);
int main(void)
{
	int x,y;
	scanf("%d %d",&x,&y);
	say("he shi: ");
	printf("%d\n",he(x,y));

	return 0;
}
int he(int a,int b)
{
	return a+b;
}
void say(char *s)
{
	printf("%s",s);
}
