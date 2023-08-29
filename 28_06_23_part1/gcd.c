#include <stdio.h>

int main(){
	int a, b, c, res, min;
	printf("Please enter the first number: ");
	scanf("%d", &a);
	printf("Please enter the second number: ");
	scanf("%d", &b);
	printf("Please enter the third number: ");
	scanf("%d", &c);
	min = a;
	if (b < a || b < c){
		min = b;
		}
	if (c < a || c < b){
		min = c;
		}
	for(int i = 1; i <= min; i++){
		if (a % i == 0 && b % i == 0 && c % i == 0){
			res = i;
			}
		}
	printf("The greatest common divisor of the numbers above is %d.\n", res);
}