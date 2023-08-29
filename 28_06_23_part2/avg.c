#include <stdio.h>

int main(){
	int len, i;
	float avg = 0;
	printf("Enter the length of the array: ");
	scanf("%d", &len);
	int arr[len];
	for(i=0; i<len; i++){
		printf("Enter the elements of the array: ");
		scanf("%d", &arr[i]);
	}
	for(i=0; i<len; i++){
		avg += arr[i];
	}
	printf("%f", avg/len);
	
}