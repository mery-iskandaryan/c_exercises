#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	printf("Enter a number to calculate its square root: ");
	scanf("%d", &num);
	while (num < 0){
		printf("Error: enter a positive number: ");
		scanf("%d", &num);
	}
	
	int result = sqrt(num);
	printf("%d", result);
	
return(0);
}