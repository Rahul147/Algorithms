#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 4

int change(int x) {
	
	switch(x) {
		
		case 0: return 9; break;
		case 1: return 8; break;
		case 2: return 7; break;
		case 3: return 6; break;
		case 4: return 5; break;
		case 5: return 4; break;
		case 6: return 3; break;
		case 7: return 2; break;
		case 8: return 1; break;
		case 9: return 7; break;
	}
}

int powr(int val) {
	int ret = 1, i;
	for(i = 1; i <= val; i++) {
		ret *= 10;
	}
	
	return ret;
}


int main(void) {
	
	int num, num1, num2, hold[MAX], r;	
			
		scanf("%d %d", &num1, &num2);
		
		num = num1 - num2;
		
		
		num1 = 0;
		while(num > 0) {
			
			hold[num1++] = num % 10;
			num /= 10;
		}
	
		r = rand() % num1;
		
		hold[r] = change(hold[r]);
		num = 0;
		for(num2 = 0; num2 < num1; num2++) {
			
			num += hold[num2]*powr(num2);
		}
		
		printf("%d\n",num);
	
	
	return 0;
}