#include<stdio.h>
#include<math.h>

#include<stdio.h>

int prime[400], k = 0, primes[100]; 

void generate_sieve() {
	int i,j;
	for(i = 0; i < 400; i++) prime[i] = 1;
	
	prime[2] = 1;
	prime[3] = 1;

	for(i = 2; i <= 367; i++) {
		if(prime[i]) {
			for(j = 2; j <= (367 / i); j++) {
				prime[i*j] = 0;
			}
		}
	}
}



int check_prime(int num) {
	int i; 
	
	if((num % 2 == 0) || (num % 3 == 0)) {
		return 0;
	}
	
	
	for(i = 0 ; i < k; i++) {
		if(num == primes[i])
			return 1;
		else if(num % primes[i] == 0)
			return 0;
	}
	
	return 1;

}


int check_pal(int num) {
	int temp = num, rev = 0;
	
	while(num > 0) {
		
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	if(rev == temp) {
		return 1;
	}
	
	return 0;
}


int main(void) {
	int num, i, str;
	
	generate_sieve();
	
	for(i = 2; i < 367; i++)
		if(prime[i])
			primes[k++] = i;
	
	
	scanf("%d", &num);
	
	if(num % 2 == 0)
		str = num + 1;
	
	for(i = str; i > 0; i+=2) {
		
		if(check_pal(i) && check_prime(i)) {
			str = i;
			break;
		}
	}
	
	printf("%d", str);
	
	return 0;
}