#include <stdio.h>
#include <stdbool.h>

int main(){
	int a,b,res;
	printf("|   A   |   B   |  Result  |\n");
	printf("|-------|-------|----------|\n");
	for (a=0; a<2; a++){
		for (b=0; b<2; b++){
			res = a&&b||!b||a;
			printf("|   %d   |   %d   |     %d    |\n", a, b,res);
		}
	}	
}