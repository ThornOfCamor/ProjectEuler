#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//Enter the any number in the terminal to find largest prime factor.

int main(){
	int i=2;
	long long int n;
	scanf("%lld",&n);
	if(isPrime(n)==1){
		printf("%lld\n",n);
		return 0;
	}
	while(n%2==0)
		n = n/2;
	if(n==1){
		printf("2\n");
		return 0;
	}
	for(i=3;i*i<=n;i++){
		if(n%i==0){
			n = n/i;
			i=2;
		}
	}
	if(n>1)
		printf("%lld\n",n);
	else
		printf("%d\n",i);
	return 0;
}
