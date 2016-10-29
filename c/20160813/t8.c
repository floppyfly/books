#include <stdio.h>
int main(void){
	int n1,n2,n3,lit;
	scanf("%d,%d,%d",&n1,&n2,&n3);
	lit=n1;
	if(lit>n2) lit=n2;
	if(lit>n3) lit=n3;
	printf("%d\n",lit);

	return 0;
}
