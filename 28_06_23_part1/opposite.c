#include <stdio.h>

int main(){
	int num;
	do {
		printf("please enter a number above 12: ");
		scanf("%d", &num);
	}while (num <= 12);

	while (num > 100){
		printf("%d", num%10);
		num = num / 10;
	}
	printf("%d%d",num%10, num/10);
}