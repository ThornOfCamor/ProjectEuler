#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	long long int a = 7654321;
	int *A, size, flag, i;
	if(isPrime(7654321)==1)
		printf("7654321\n");
	for(a=7654321;a>2143;a-=4){
		A = arrayOfDigits(a, &size);
		if(occurrence(A, size, 0)==0){
			flag = 1;
			for(i=9;i>size;i--)
				if(occurrence(A, size, i)==1){
					flag = 0;
					break;
				}
			for(i=1;i<=size && flag==1;i++)
				if(noOfOccurrences(A, size, i)!=1)
					flag = 0;
			if(flag==1)
				if(isPrime(a)==1){
					printf("%lld\n", a);
					return 0;
				}
		}
		a -= 2;
		A = arrayOfDigits(a, &size);
		if(occurrence(A, size, 0)==0){
			flag = 1;
			for(i=9;i>size;i--)
				if(occurrence(A, size, i)==1){
					flag = 0;
					break;
				}
			for(i=1;i<=size && flag==1;i++)
				if(noOfOccurrences(A, size, i)!=1)
					flag = 0;
			if(flag==1)
				if(isPrime(a)==1){
					printf("%lld\n", a);
					return 0;
				}
		}
	}
	return 0;
}