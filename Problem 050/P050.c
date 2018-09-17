#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i, k;
	int count = 2, sum = 5;
	for(i=1;sum<1000000;i++){
		k = 6*i - 1;
		if(isPrime(k)==1)
			if(sum+k<1000000){
				sum += k;
				count++;
			}
			else 
				break;
		k += 2;
		if(isPrime(k)==1)
			if(sum+k<1000000){
				sum += k;
				count++;
			}
			else 
				break;
	}
	if(isPrime(sum)==1){
		printf("%d\n", sum);
		return 0;
	}
	for(i=2;i<1000;i++)
		if(isPrime(i)==1){
			sum -= i;
			count--;
			if(isPrime(sum)==1){
				printf("%d\n", sum);
				return 0;
			}
	}
}
