#include <stdio.h>
int he(int n){
	if(n<1){
		return 0;
	}
	int i,he=0;
	for(i=0;i<=n;i++){
		he+=i;
	}
	return he;
}
int main(void){
	int x;
	scanf("%d",&x);
	printf("he shi %d\n",he(x));
	return 0;
}
