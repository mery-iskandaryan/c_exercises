#include <stdio.h>

int main(){
	printf("Enter the size of the arrays: ");
	int size, mergeSize;
	scanf("%d", &size);
	mergeSize = size+size;
	int arr1[size], arr2[size], mergeArr[mergeSize];
	for(int i=0; i<size;++i){
		printf("Enter the elements of the first array: ");
		scanf("%d", &arr1[i]);
	}
	printf("\n");
	for(int i=0; i<size;++i){
		printf("Enter the elements of the second array: ");
		scanf("%d", &arr2[i]);
	}
	for(int i=0; i<mergeSize; ++i){
		if(i<size){
			mergeArr[i] = arr1[i];
		}else{
			mergeArr[i] = arr2[i-size];}
	}

	for(int i=0; i<mergeSize; ++i){
		printf("%d", mergeArr[i]);
	}
}