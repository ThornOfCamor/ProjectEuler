#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//Highest possible value of n=5.
//If n=5, highest = 918273654

//If n=4, 10<k, k*2, k*3<100, and 100<k*4<1000 => 25<k<34
//Therefore 260000000 < highest < 350000000, i.e. less than current highest

//If n =3, 100<k, k*2, k*3 <1000 => 122<k<330
//Therefore 123000000 < highest < 330000000, i.e. less than current highest

//If n=2, 1000<k<10000 & 10000<k*2<100000, 5000<k<10000
//highest may be more than current highest.
int main(){
	int a, b;
	long long int max = 918273645, p = 0;
	int *A, *B;
	int n, i, flag;
    for(a=5123;a<9877;a++)
    	if(a%5!=0){
    		flag = 1;
    		A = arrayOfDigits(a, &n);
    		if(occurrence(A, 4, 0)==0){
				for(i=0;i<4;i++)
					if(noOfOccurrences(A, 4, A[i])>10){
						flag = 0;
						break;
					}
				if(flag==1){
					b = 2*a;
					B = arrayOfDigits(b, &n);
					if(occurrence(B, 5, 0)==0){
						for(i=0;i<4;i++)
							if(noOfOccurrences(B, 5, A[i])>0){
								flag = 0;
								break;
							}
						for(i=0;i<5;i++)
							if(flag==0)
								break;
							else if(noOfOccurrences(B, 5, B[i])>1)
								flag = 0;
						if(flag == 1){
							p = a*power(10,5) + b;
							if(p>max)
								max = p;
						}
					}
				}
    		}
    	}
    printf("%lld\n", max);
    return 0;
}