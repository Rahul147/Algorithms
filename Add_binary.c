/*
PROBLE FROM T CORMEN 

ADD A 'N' BIT BINARY NUMBER

*/

#include<stdio.h>
#define MAX 100
//int Add(int, int, int);

int c[MAX];

int Add(int a, int b, int temp, int i) {
	
	if(a==0 && b==0 && temp==0) {
		
		c[i] = 0;
		return 0;
		
	}
		
	else if(a==0 && b==0 && temp==1) {
		
		c[i] = 1;
		return 0;
		
	}
	
	else if( ( (a==0 && b==1) || (a==1 && b==0) ) && temp==0) {
		
		c[i] = 1;
		return 0;
		
	}
	
	else if( ( (a==0 && b==1) || (a==1 && b==0) ) && temp==1) {
	
		c[i] = 0;
		return 1;
	
	}
	
	else if(a==1 && b==1 && temp==0) {
		
		c[i] = 0;
		return 1;
		
	}
	
	else if(a==1 && b==1 && temp==1) {
		
		c[i] = 1;
		return 1;
		
	}
}


int main()
{
	int A[MAX], B[MAX], temp = 0, i, j;
	
	for(i = 0; i < 3; i++) {
		
		scanf("%d", &A[i]);
		
	}
	
	for(i = 0; i < 3; i++) {
		
		scanf("%d", &B[i]);
		
	}

	for(i = 2, j=0; i >= 0 ; i--,j++) {
		
		temp = Add(A[i], B[i], temp, j);
		
	}
	
	// to add the last value to the array !
	
	c[j++] = temp;
	
	for(i = 3; i >= 0; i--) {
		
		printf("%d", c[i]);
		
	}
}