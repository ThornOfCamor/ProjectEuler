#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i;
	for(i=647;;i++)
		if(noOfPrimeFactors(i)==4)
			if(noOfPrimeFactors(i+1)==4)
				if(noOfPrimeFactors(i+2)==4)
					if(noOfPrimeFactors(i+3)==4){
						printf("%d\n", i);
						return 0;
					}
					else
						i += 3;
				else
					i += 2;
			else 
				i++;
	return -1;
}
