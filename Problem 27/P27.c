#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int a, b, n = 0;
	int i = 0, prod = 41;
	int count =0;
	int countHigh = 40;
	for(b=41;b<1000;b+=2){
		if(isPrime(b)==1){
			for(i=-500;i<500;i++){
                a = 2*i+1;
                count = 0;
                for(n=0;;n++){
                    if(isPrime(n*n+a*n+b)==1)
                        count++;
                    else
                        break;
                }
				if(count>countHigh){
					countHigh = count;
					prod = a*b;
				}
			}
		}
	}
	printf("%d\n", prod);
	return 0;
}
