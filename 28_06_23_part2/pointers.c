#include <stdio.h>

int main(){
	int a = 45;
	char b = 'a';
	float c = 0.75;
	int* intP = &a;
	char* charP = &b; 
	float* floatP = &c;
	printf("%p\n", intP);
	printf("%char\n", charP);
	printf("%float\n", floatP);
}