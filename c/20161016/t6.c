#include <stdio.h>
void put_x(int n){
	int i;
	for(i=0;i<n;i++){
		putchar('*');
	}
}
int main(void)
{
	int u,i;
	scanf("%d",&u);
	for(i=1;i<=u;i++){
		put_x(i);
		puts("");
	}
	
	return 0;
}
