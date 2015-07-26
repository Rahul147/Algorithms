#include<stdio.h>

// works well for a small number of inputs


void InsertionSort(int *arr, int size) {
	
	int i, j, key;
	for(j = 2; j <= size; j++) {
		
		key = arr[j];
		i = j-1;
		
		while( (i > 0) && (arr[i] > key) ) {
			
			arr[i+1] = arr[i];			
			i = i - 1;
		}
		
		arr[i+1] = key;
			
	}
}


int main(void) 
{
	
	int arr[MAX], size, i;
	
	scanf("%d", &size);
	for(i = 1; i <= size; i++) {
		scanf("%d", &arr[i]);
	}
	
	InsertionSort(arr, size);
	
	for(i = 1; i <= size; i++) {
		printf("%d", arr[i]);
	}
	
	
}