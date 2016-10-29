#include <stdio.h>
void put_x(int n){
	int i;
	for(i=0;i<n;i++){
		putchar('*');
	}
}
int main(void)
{
	int put=0;
	scanf("%d",&put);
	int i;
	for(i=1;i<=put;i++){
		put_x(i);
		puts("");

	}

	return 0;
}
