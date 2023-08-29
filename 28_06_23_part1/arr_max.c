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
	for(int i=1; i<arr_size; i++){
		if(arr[0] < arr[i]){
			arr[0] = arr[i];
		}
	}
printf("%d", arr[0]);
return(0);
}