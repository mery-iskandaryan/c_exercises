#include <stdio.h>
#include <ctype.h>

int main()
{
	char sym;
	printf("Enter a character: ");
	scanf("%c", &sym);
	if (isdigit(sym)){
	printf("True");
	}
	else {
	printf("False");
	}
return(0);
}