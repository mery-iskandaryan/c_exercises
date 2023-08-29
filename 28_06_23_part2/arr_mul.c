#include <stdio.h>

int main(){
	int i,j,len;
	printf("Please enter the length of arrays: ");
	scanf("%d", &len);
	int arr_1[len];
	for (i=0; i<len; i++){
		printf("Please enter the elements of the first array: ");
		scanf("%d", &arr_1[i]);	
	}
	printf("Here are the elements of the first array: ");
	for(i=0; i<len; i++){
		printf("%d ", arr_1[i]);
	}
	printf("\n\n");
	int arr_2[len];
	for (i=0; i<len; i++){
		printf("Please enter the elements of the second array: ");
		scanf("%d", &arr_2[i]);	
	}
	printf("Here are the elements of the second array: ");
	for(i=0; i<len; i++){
		printf("%d ", arr_2[i]);
	}
	printf("\n\nHere is the array of multiplications: ");
	for(i=0; i<len; i++){
		printf("%d ", arr_1[i]*arr_2[i]);
	}
}