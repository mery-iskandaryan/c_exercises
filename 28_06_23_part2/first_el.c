#include <stdio.h>

int main(){
	int arr[] = {16,22,10,26,30};
	int* arrP = &arr[0];
	for(int i= 0; i < sizeof(arr)/sizeof(arr[0]); i++){
		printf("%d\n", *(arrP+i));
	}
}