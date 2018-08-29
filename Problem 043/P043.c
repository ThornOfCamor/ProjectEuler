#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//Alternative Solution (Possible by hand)
//d4d5d6 must be divisible by 5, so d6 is 5 or 0.

//d6d7d8 must be divisible by 11.
//if d6 = 0, d7==d8 is the only possibility, d6 = 5.

//Set of possiblities for d6d7d8 = { 506, 517, 528, 539, 561, 572, 583, 594}
//d7d8 = { 06, 17, 28, 39, 61, 72, 83, 94}
//d7d8d9 is divisivle by 13
//Possibilities for d6d7d8d9 = { 5286, 5390, 5728, 5832}
//d8d9 = { 86, 90, 28, 32}
//d8d9d10 is divisible by 17
//Possibilities for d6d7d8d9d10 = { 52867, 53901, 57289}
//d5d6d7 should be divisible by 7
//d6d7 = { 52, 53, 57}
//Possibilities for d5d6d7d8d9d10 = { 357289, 952867}
//d2d3d4 is divisible by 2, i.e. d4 = { 2, 4, 6, 8, 0}
//Possibilites for d4d5d6d7d8d9d10 = { 0357289, 0952867, 4357289, 4952867, 6357289}
//d4d5 = { 03, 09, 43, 49, 63}, digit sum = { 3, 9, 7, 13, 9}, d3+d4+d5 must be divisible by 3
//Possibilities for d3d4d5d6d7d8d9d10 = { 06357289, 30952867, 60357289}
//Possibilties for d1d2 = { 14, 41}
//Possibilities = { 1406357289, 1430952867, 1460357289, 4106357289, 4130952867, 4160357289}

//Answer = 16695334890
int main(){
	long long int i, sum = 0, k;
	int *A, j, size, flag = 1, num;
	for(i=123456789;i<9876543211;i+=9){
		k = i;
		if((k%1000)%17==0){
			k /= 10;
			if((k%1000)%13==0){
				k /= 10;
				if((k%1000)%11==0){
					k /= 10;
					if((k%1000)%7==0){
						k /= 10;
						if((k%1000)%5==0){
							k /= 10;
							if((k%1000)%3==0){
								k /= 10;
								if((k%1000)%2==0){	
									A = arrayOfDigits(i, &size);
									flag = 1;
									for(j=0;j<size && size==10 && flag==1;j++)
										if(noOfOccurrences(A, size, j)!=1)
											flag = 0;
									for(j=1;j<10 && size==9 && flag==1;j++)
										if(noOfOccurrences(A, size, j)!=1)
											flag = 0;
									if(flag==1){
										sum += i;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	printf("%lld\n", sum);
	return 0;
}
