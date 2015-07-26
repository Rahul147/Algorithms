#include<stdio.h>


void arng(int *arr, int size) {
	int i, j, key;
	for(j = 2; j <= size; j++) {
		
		key = arr[j];
		i = j - 1;
		
		while( (i > 0) && (arr[i] > key) ) {
			
			arr[i+1] = arr[i];			
			i = i - 1;
		}
		
		arr[i+1] = key;
			
	}
}

int main(void)
{
	
	int tst, num_pie, wgh_pie[35], wgh_rack[35], count, i, j;
	
	
	scanf("%d", &tst);
	
	
	while(tst--) {
		
		count = 0;
		scanf("%d", &num_pie);
		
		for(i = 1; i <= num_pie; i++) {
			scanf("%d", &wgh_pie[i]);
		}
		
		for(i = 1; i <= num_pie; i++) {
			scanf("%d", &wgh_rack[i]);
		}
		
		arng(wgh_pie, num_pie);
		arng(wgh_rack, num_pie);
		
		i = 1, j = 1; 
		while(i <= num_pie && j <= num_pie) {
			
			if(wgh_pie[i] <= wgh_rack[j]) {
				
				i++;
				j++;
				count++;
			}
			else
				j++;
		}

		printf("%d\n", count);
	}
	return 0;
}