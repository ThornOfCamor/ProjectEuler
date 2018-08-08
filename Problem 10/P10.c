#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//Gives sum of all prime numbers under n. Not including n.
int main(){
	int i,k;
	long long int sum = 5;
	int n;
	scanf("%d",&n);
	for(i=1;k<n;i++){
		k = i*6 - 1;
		if(isPrime(k)==1 && k<n)
			sum += k;
		k +=2;
		if(isPrime(k)==1 && k<n)
			sum +=k;
	}
	printf("%lld\n",sum);
	return 0;
}
