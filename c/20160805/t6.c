#include <stdio.h>
int main(void){
	float a;
	printf("qin shu ru nian ling[1-10]:");
	scanf("%f",&a);
	if(a<3){
		printf("zai jia,nai nai kan\n");
	}
	else if(a<7){
		printf("you er yuan\n");
	}
	else if(a<8){
		printf("shang yi nian ji\n");
	}
	else if(a<9){
		printf("shang er nian ji\n");
	}
	else if(a<10){
		printf("shang san nian ji\n");
	}
	else{
		printf("hai mei you zhang neng mo da\n");
	}
	return 0;
}
