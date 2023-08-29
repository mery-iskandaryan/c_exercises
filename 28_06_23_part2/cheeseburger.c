#include <stdio.h>
#include <string.h>

int main(){
	char arr[] = "CheeseBurger";
	int min, max = arr[0];
	/*for(int i = 0; i < sizeof(arr)-1; ++i){
		if (arr[i] < min){
			min = arr[i];
		} 
	}
	printf("%d\n", min);
	for(int i = 0; i < sizeof(arr)-1; ++i){
		if (arr[i] > max){
			max = arr[i];
		} 
	}
	printf("%d\n", max);

	int counter = 0;

	for (int i=0; i < sizeof(arr)-1; ++i){
		if (arr[i] == 'a' || arr[i] == 'A' || arr[i] == 'e' || arr[i] == 'E' || arr[i] == 'i' || 
		arr[i] == 'I' || arr[i] =='o' || arr[i] =='O' || arr[i] == 'u' || arr[i] == 'U'){
			counter += 1;
		}
	}
	printf("%d\n", counter);
	
	for(int i=sizeof(arr); i>=0; --i){
		printf("%c", arr[i]);
	}*/
	int temp;
	for(int i=0; i<sizeof(arr)-1/2; i++){
		temp = arr[i];
		arr[i] = arr[sizeof(arr)-i-1];
		arr[sizeof(arr)-i-1]=temp;
	}

	int length = strlen(arr);
	for(int i =0, j=length-1; i<j; i++,j--) {
		char temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;       
	}

	for (int i=0; i<length;++i){
		printf("%c", arr[i]);}
	printf("\n");

	for(int i=0; i<=length;++i){
		if (arr[i] >= 'a' && arr[i] <= 'z'){
			arr[i] = arr[i]-32;
		}else{
			arr[i]=arr[i];}
	}

	for (int i=0; i<length;++i){
		printf("%c", arr[i]);
	}	

}