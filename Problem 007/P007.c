#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//Finds nth prime number
int main(){
	long int k = 5;
	int count = 2;
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("2");
		return 0;
	}
	if(n==2){
		printf("3");
		return 0;
	}
	for(k=5;count<n;k+=4){
		if(isPrime(k)==1){
			count++;
			if(count==n){
				printf("%ld\n",k);
				break;
			}
		}
		k += 2;
		if(isPrime(k)==1){
			count++;
			if(count==n){
				printf("%ld\n",k);
				break;
			}
		}
	}
	return 0;
}
