#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i, j, k, l, m, sum = 0;
	int a, b, c, d, e, min = 30000;
	for(i=3;i<9992;i+=2)
		if(isPrime(i)==1){
			a = noOfDigits(i);
			for(j=i+2;j<9994;j+=2)
				if(isPrime(j)==1){
					b = noOfDigits(j);
					if(isPrime(power(10, b)*i+j)==1 && isPrime(power(10, a)*j+i)==1)
						for(k=j+2;k<9996;k+=2)
							if(isPrime(k)==1){
								c  = noOfDigits(k);
								if(isPrime(power(10, c)*i+k)==1 && isPrime(power(10, a)*k+i)==1)
									if(isPrime(power(10, b)*k+j)==1 && isPrime(power(10, c)*j+k)==1)
										for(l=k+2;l<9998;l+=2)
											if(isPrime(l)==1){
												d = noOfDigits(l);
												if(isPrime(power(10, a)*l+i)==1 && isPrime(power(10, d)*i+l)==1)
													if(isPrime(power(10, b)*l+j)==1 && isPrime(power(10, d)*j+l)==1)
														if(isPrime(power(10, c)*l+k)==1 && isPrime(power(10, d)*k+l)==1)
															for(m=l+2;m<10000;m++)
																if(isPrime(m)==1){
																	e = noOfDigits(m);
																	if(isPrime(power(10, a)*m+i)==1 && isPrime(power(10, e)*i+m)==1)
																		if(isPrime(power(10, b)*m+j)==1 && isPrime(power(10, e)*j+m)==1)
																			if(isPrime(power(10, c)*m+k)==1 && isPrime(power(10, e)*k+m)==1)
																				if(isPrime(power(10, d)*m+l)==1 && isPrime(power(10, e)*l+m)==1)
																					if(min>i+j+k+l+m){
																						min = i+j+k+l+m;
																						printf("%d\n", min);
																						return 0;
																					}
																}
											}
							}
				}
			}
}
