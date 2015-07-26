#include<stdio.h>


int main(void) {
	
	int c[100],rem = 0, bin1, bin2, i = 0;
	
	scanf("%d %d", &bin1, &bin2);
	
	while( bin1!=0 || bin2!=0 ) {
		
		c[i++] = ( (bin1%10) + (bin2%10) + rem ) % 2;
		rem = ( (bin1%10) + (bin2%10) + rem ) / 2;
		
		bin1 /= 10;
		bin2 /= 10;

	}
	
	if( rem!=0 ) {
		c[i] = rem; 
	}
	
	while(i>=0) {
		
		printf("%d", c[i--]);
	}
}