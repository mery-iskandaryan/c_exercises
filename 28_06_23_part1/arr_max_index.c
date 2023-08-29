#include <stdio.h>

int main()
{
	int arr_size;
	printf("Enter the size of array: ");
	scanf("%d", &arr_size);

	int arr[arr_size];
	for(int i=0; i<arr_size; i++){
		printf("Enter an element: ");
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for(int i=1; i<arr_size; i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	for(int i=0; i<arr_size; i++){
		if(arr[i] == max){
			printf("%d", i);
		}
	}

return(0);
}