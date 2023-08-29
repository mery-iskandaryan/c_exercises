#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char sym;
	printf("Enter an uppercase letter: ");
	scanf("%c", &sym);
	sym = tolower(sym);
	printf("Your input is %c.\n", sym);

return(0);
}