#include <stdio.h>
int main(void){
	int vx,vy;
	puts("Enter two numbers");
	scanf("%d %d",&vx,&vy);
	printf("he shi %d\n",vx+vy);
	printf("cha shi %d\n",vx-vy);
	printf("ji shi %d\n",vx*vy);
	printf("shang shi %d\n",vx/vy);
	printf("%d qiu yu %d shi %d\n",vx,vy,vx%vy);

	return 0;
}
