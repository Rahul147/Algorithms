#include<stdio.h>

#define MAX 1000

int main(void) {
	int chef[MAX], assis[MAX], jobs[MAX], total_work, work_done, tst, val, i, chef_count, assis_count, jobs_todo[MAX], k;
	
	scanf("%d", &tst);

	while(tst--) {
		
		for(i = 0; i <= MAX; i++)
			jobs_todo[i] = chef[i] = assis[i] = jobs[i] = 0;
		
		chef_count = assis_count = 0;
		k = 1;
		
		scanf("%d", &total_work);
		scanf("%d", &work_done);
		
		for(i = 0; i < work_done; i++) {
			
			scanf("%d", &val);
			jobs[val] = 1;
		}

		for(i = 1; i <= total_work; i++) {
			
			if(jobs[i] == 0)
				jobs_todo[k++] = i;
		}
		
		
		for(i = 1; i < k; i++) {
			
			if((i % 2) != 0)
				chef[chef_count++] = jobs_todo[i];
			
			else
				assis[assis_count++] = jobs_todo[i];
		}
		
		
		
		if(chef_count == 0)
			printf("\n");
		
		else {
			
			for(i = 0; i < chef_count; i++)
				printf("%d ", chef[i]);
			
			printf("\n");
		}
		
		
		
		if(assis_count == 0)
			printf("\n");
		
		else {
			
			for(i = 0; i < assis_count; i++)
				printf("%d ", assis[i]);
			
			printf("\n");
		}

		
	}
	
	
	return 0;
}
		