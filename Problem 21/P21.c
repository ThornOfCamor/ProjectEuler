#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int sumofproperdivisors(int n){
	int i;
	int count = 1;
	if(isPrime(n)==1)
		return 1;
	for(i=2;i*i<n;i++)
		if(n%i==0)
			count += i + n/i;
	if(i*i==n)
		return count + i;
	else 
		return count;
}

int main(){
	int i;
	int sum = 0;
	for(i=2;i<10000;i++)
		if(isPrime(i)==0)
			if(sumofproperdivisors(i) != i)
				if(i==sumofproperdivisors(sumofproperdivisors(i)))
					sum += i;
	printf("%d\n", sum);
	return 0;
}
