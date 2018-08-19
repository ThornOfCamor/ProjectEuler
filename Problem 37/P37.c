#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i, k, count = 0;
	long int sum = 0;
	for(i = 2; i<17;i++){
		k = 6*i - 1;
		if(isPrime(k) == 1 && isPrime(k%10) == 1)
			if(isPrime(k/10) == 1){
				count++;
				sum += k;
			}
		k = 6*i + 1;
		if(isPrime(k) == 1 && isPrime(k%10) == 1)
			if(isPrime(k/10) == 1){
				count++;
				sum += k;
			}
	}
	for(i = 17; i<(1000/6)+1;i++){
		k = 6*i - 1;
		if(isPrime(k) == 1 && isPrime(k%10) == 1 && isPrime(k%100) == 1)
			if(isPrime(k/10) == 1 && isPrime(k/100) == 1){
				count++;
				sum += k;
			}
		k = 6*i + 1;
		if(isPrime(k) == 1 && isPrime(k%10) == 1 && isPrime(k%100) == 1)
			if(isPrime(k/10) == 1 && isPrime(k/100) == 1){
				count++;
				sum += k;
			}
	}
	for(i = (1000/6)+1; i<(10000/6)+1;i++){
		k = i*6 - 1;
		if(isPrime(k) == 1 && isPrime(k%10) == 1 && isPrime(k%100) == 1 && isPrime(k%1000) == 1)
			if(isPrime(k/10) == 1 && isPrime(k/100) == 1 && isPrime(k/1000) == 1){
				count++;
				sum += k;
			}
		k = i*6 + 1;
		if(isPrime(k) == 1 && isPrime(k%10) == 1 && isPrime(k%100) == 1 && isPrime(k%1000) == 1)
			if(isPrime(k/10) == 1 && isPrime(k/100) == 1 && isPrime(k/1000) == 1){
				count++;
				sum += k;
			}
	}
	for(i = (10000/6)+1; i<1000000;i++){
		k = i*6 - 1;
		if(isPrime(k) == 1 && isPrime(k%10) == 1 && isPrime(k%100) == 1 && isPrime(k%1000) == 1 && isPrime(k%10000) == 1 && isPrime(k%100000) == 1)
			if(isPrime(k/10) == 1 && isPrime(k/100) == 1 && isPrime(k/1000) == 1 && isPrime(k/10000) == 1 && isPrime(k/100000) == 1){
				count++;
				sum += k;
			}
		if(count == 11)
			break;
		k = i*6 - 1;
		if(isPrime(k) == 1 && isPrime(k%10) == 1 && isPrime(k%100) == 1 && isPrime(k%1000) == 1 && isPrime(k%10000) == 1 && isPrime(k%100000) == 1)
			if(isPrime(k/10) == 1 && isPrime(k/100) == 1 && isPrime(k/1000) == 1 && isPrime(k/10000) == 1 && isPrime(k/100000) == 1){
				count++;
				sum += k;
			}
		if(count == 11)
			break;
	}
	printf("%ld\n",sum);
}
