#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library

int main()
{
	int i;
	long long int k = 5000*10001;
	int m;
	for(i=10001;i<12500;i++){
	    k += i;
	    m = noOfDivisors(k);
		if(m>500){
			printf("%lld\n", k);
		}
	}
	return -1;
}
