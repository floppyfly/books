#include <stdio.h>
void fa(int a[],int n){
	while(n>0){
		n--;
		printf("%d\n",a[n]);
	}
}
int main(void){
	int arr[33]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33};
	fa(arr,33);
	return 0;
}
