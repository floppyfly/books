#include <stdio.h>
int arrsum(int a[],int n);
void arrcopy(int a[],int b[],int n){
	int i;
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
}
int arrsum(int a[],int n){
	int i,sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
	}
	return sum;
}
int main(void){
	int a[3]={3,33,333},b[3];
	arrcopy(a,b,3);
	printf("%d,%d,%d\n",b[1],b[2],b[3]);
	int o=arrsum(a,3);
	printf("%d\n",o);
	return 0;
}
