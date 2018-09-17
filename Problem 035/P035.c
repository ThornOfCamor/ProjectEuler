#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//Count initiated at 13 because the 
int main(){
	long int i;
	int count = 13;
	for(i=100; i<1000;i++){
		if(i%10 == 0 || (i%10)%10 == 0)
			continue;
		else if(isPrime(i)==1 && isPrime((i/10)+100*(i%10))==1 && isPrime((i/100)+10*(i%100))==1)
			count++;
	}
	for(i=1000; i<10000;i++){
		if(i%10 == 0 || (i/10)%10 == 0 || (i/100)%10 == 0)
			continue;
		else if(isPrime(i)==1 && isPrime((i/10)+1000*(i%10))==1 && isPrime((i/100)+100*(i%100))==1 && isPrime((i/1000)+10*(i%1000))==1)
			count++;
	}
	for(i=10000; i<100000;i++){
		if(i%10 == 0 || (i%10)%10 == 0 || (i/100)%10 == 0 || (i/1000)%10 == 0)
			continue;
		else if(isPrime(i)==1 && isPrime((i/10)+10000*(i%10))==1 && isPrime((i/100)+1000*(i%100))==1 && isPrime((i/1000)+100*(i%1000))==1 && isPrime((i/10000)+10*(i%10000))==1)
			count++;
	}
	for(i=100000; i<1000000;i++){
		if(i%10 == 0 || (i%10)%10 == 0 || (i/100)%10 == 0 || (i/1000)%10 == 0 || (i/10000)%10 == 0)
			continue;
		else if(isPrime(i)==1 && isPrime((i/10)+100000*(i%10))==1 && isPrime((i/100)+10000*(i%100))==1 && isPrime((i/1000)+1000*(i%1000))==1 && isPrime((i/10000)+100*(i%10000))==1 && isPrime((i/100000)+10*(i%100000))==1)
			count++;
	}
	printf("%d\n", count);
}
	
