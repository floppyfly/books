/*给出一个数，计算1到该数范围内，所有满足条件的数。
 * 注意，要求最后一个数没有逗号，并换行。
 * 思路：因为最后一个数有特殊要求，既然是最后一个数，
 * 那么，下一个数肯定不满足条件，所以，在while循环里面，
 * 加入了if语句，来加上“下一个数不符合条件的判断"。
 */
#include <stdio.h>
int main(void){
	int n,step=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(step<=n){
		int temp=step*4+3;
		if(temp>n){
			printf("%d\n",step);
		}
		else{
			printf("%d,",step);
		}
		step=temp;
	}
	
	return 0;
}
