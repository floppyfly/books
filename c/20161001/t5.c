#include <stdio.h>
void say(void);
void say1(int number1);
void say2(int number,char *name);
int main(void)
{
	say();
	say1(3);
	say2(33,"floppyfly");

	return 0;
}
void say(void)
{
	printf("ni hao\n");
}
void say1(int number)
{
	printf("nin shu ru %d\n",number);
}
void say2(int number,char *name)
{
	printf("hi %s nin shu ru %d\n",name,number);
}
