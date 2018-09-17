#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i, j, k, flag;
	int *A, *B, *C, a;
	for(i=1003;i<9998;i++)
		if(isPrime(i)==1){
			A = arrayOfDigits(i, &a);
			for(j=1;i+2*j<10000;j++){
				flag = 1;
				if(isPrime(i+j)==1){
					B = arrayOfDigits(i+j, &a);
					for(k=0;k<4 && flag==1;k++)
						if(noOfOccurrences(A, 4, A[k]) != noOfOccurrences(B, 4, A[k]))
							flag = 0;
					if(flag==1 && isPrime(i+j+j)==1){
						C = arrayOfDigits(i+j+j, &a);
						for(k=0;k<4 && flag==1;k++)
							if(noOfOccurrences(A, 4, A[k]) != noOfOccurrences(C, 4, A[k]))
								flag = 0;
						if(flag==1 && i!=1487){
							printf("%d%d%d\n", i, i+j, i+j+j);
							return 0;
						}
					}
				}
			}
		}
	return 0;
}
