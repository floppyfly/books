#include <stdio.h>
int main(void){
	int n1,n2,cha;
	scanf("%d,%d",&n1,&n2);
	n1>n2?(cha=n1):(cha=n2);
	printf("%d\n",cha);

	return 0;
}
