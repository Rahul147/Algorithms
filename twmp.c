#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int check_pal(int num) {
	
	int chk = num, rev = 0;
	
	
	while(num > 0) {
		
		rev = rev * 10 + num % 10;
		
		num /= 10;
		
				
	}
	
	if(chk == rev) {
		
		//printf("%d", rev);
		
		return rev;
		
		
	}
	
	return 0;
	
}




int check(int n) {
	
	int i, sq = n / 2;
	
	if (n % 2 == 0 || n % 3 == 0) {
	
	return 0;
	
	}
	
	//int sq=sqrt(n);
	
	for(i = 5; i < sq; i += 6) {
	
		if( n % i == 0 || n % (i + 2) == 0 ) 
 	 	return 0; 
	
	}
	
	return 1;
	
}


int main(void) {
	
	
	int num, upper_bound, lower_bound, mul_6, ans;
	
	scanf("%d", &num);
	
	switch(num) {
		
		case 2: printf("%d", 2); break;
		
		case 3: printf("%d", 3); break;
		
		case 5: printf("%d", 5); break;
		
		case 7: printf("%d", 7); break;
		
		case 11: printf("%d", 11); break;
		
		//case 13: printf("%d", 13); break;
		
		default :
		
						
					
					lower_bound = ( num % 6 );
					mul_6 = ( num + lower_bound ) / 6 + 1;
					
					while(1) {
						
											
						lower_bound = mul_6 * 6 - 1;
						upper_bound = mul_6 * 6 + 1;
						
						if((ans = check_pal(lower_bound)) && check(lower_bound)) {
						//	printf("%d\n",lower_bound);
							//check_pal(lower_bound);
							printf("%d", ans);
							exit(0);
							
						}
						
						if((ans = check_pal(upper_bound)) && check(upper_bound)) {
						//	printf("%d\n",upper_bound);
							//check_pal(upper_bound);
							printf("%d", ans);
							exit(0);
						}
						
					
						mul_6++;
						
						
						
					}
	}
	
	return 0;
	
}