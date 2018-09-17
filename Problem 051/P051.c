#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//2090021 is obtained for 3 0's being replaced. Answer is smaller than that.
int main(){
	int i, *A, num, size, count, j, k, p = 0;
	for(i=50003;i<2090021;i+=2){
		if(isPrime(i)==1){
			A = arrayOfDigits( i, &size);
			if(noOfOccurrences(A, size, 1)==3){
				count = 1;
				p = 0;
				for(k=0;k<size;k++)
					if(A[k]==1)
						p += power(10, k);
				num = i;
				for(j=2;j<10;j++){
					num += p;
					if(isPrime(num)==1)
						count++;
				}
				if(count>=8){
					printf("%d\n", i);
					return 0;
				}
			}	
		}
	}
	return 0;
}
