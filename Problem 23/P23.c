#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//The code takes a few seconds to provide result. Patience is a virtue.
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

int isAbundant(int n){
    if(isPrime(n)==1)
    	return 0;
    else if(n<sumofproperdivisors(n))
        return 1;
    else
        return 0;
}

int isSumofAbundant(int n){
    int i;
    for(i=12;i<=n/2;i++){
        if(isPrime(i)==0 && isPrime(n-i)==0 && isAbundant(i)==1 && isAbundant(n-i)==1)
            return 1;
    }
    return 0;
}

int main(){
    int i;
    int sum = 0;
    int k;
    for(i=1;i<=28123;i++)
        if(isSumofAbundant(i)==0){
            k = i;
            sum += i;
        }
        printf("%d\n",sum);
    return 0;
}