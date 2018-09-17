#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i = 0;
	int n = 3;
	int k = 9;
	float countD = 5.00;
	float countP = 3.00;
	for(n=3;countP/countD > 0.1;n+=2){
		k = n*n;
		countD += 4;
		for(i=0;i<3;i++)
		{
			k += (n + 1);
			if(isPrime(k)==1)
				countP++;
		}
		i = 0;
	}
	printf("%d\n",n);
	return 0;
}
