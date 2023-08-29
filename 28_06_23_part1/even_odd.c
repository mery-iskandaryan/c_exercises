#include <stdio.h>

int main()
{
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	if(x%2==0){
	printf("The input number is even.");
	}
	else{
	printf("The input number is odd.");
	}
return(0);
}