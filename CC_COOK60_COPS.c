#include<stdio.h>

#define MAX 100

int main(void)
{
	
	int m, x, y, cops[10], tst, i, safe[MAX], low, high, ans[10000], j, k = 0;
	
	scanf("%d", &tst);
	
	
	while(tst--) {
		
		for(i = 0; i <= 100; i++) safe[i] = 1;
		
		scanf("%d %d %d", &m, &x, &y);
		
		i = 0;
		while(m--) {
			scanf("%d", &cops[i++]);
		}
		
		for(j = 0; j < i; j++) {
			
			low = cops[j] - (x*y);			
			if(low < 1) 
				low = 1;
			
			
			high = cops[j] + (x*y);			
			if(high > 100) 
				high = 100;
			
			
			while(low <= high)
				safe[low++] = 0;			
		}
		
		j = 0;
		for(i = 1; i <= 100; i++) {
			if(safe[i] == 1) {
				j++;	
				//printf("\n%d==>%d\n", si, safe[i]);				
			}	
			//printf("/n%d/n", safe[i]);
		}
		ans[k] = j;
		k++;
	}
	
	printf("%d\n",ans[0]);
	for(i = 1; i < k; i++)
		printf("%d\n",ans[i]);
	
	
	
	return 0;
	
}