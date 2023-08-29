#include <stdio.h>

int main(){
	int num;
	int sum = 0;
	printf("Please enter an integer number: ");
	scanf("%d", &num);
	while (num > 100){
		sum = sum + num%10;
		num = num/10;}
	sum = sum + num%10 + num/10;
	printf("The sum of the digits of the entered number is %d.\n", sum);
}