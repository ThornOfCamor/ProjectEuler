#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i, *A, *B, sizeA, sizeB, flag, j, k;
	for(i=100;;i++){
		A = arrayOfDigits(i, &sizeA);
		flag = 1;
		for(j=2;j<7 && flag==1;j++){
			B = arrayOfDigits(i*j, &sizeB);
			if(sizeA != sizeB){
				flag = 0;
				break;	
			}
			for(k=0;k<sizeA && flag==1;k++)
				if(noOfOccurrences(A, sizeA, A[k])!=noOfOccurrences(B, sizeB, A[k]))
					flag = 0;
		}
		if(flag==1){
			printf("%d\n", i);
			break;
		}
	}
}
