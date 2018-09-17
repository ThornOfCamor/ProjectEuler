#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i;
	long int sum = 0;
	for(i=1;i<1000000;i++)
		if(isPalin(i, 10)==1 && isPalin(i, 2)==1)
			sum += i;
	printf("%ld\n", sum);
	return 0;
}
