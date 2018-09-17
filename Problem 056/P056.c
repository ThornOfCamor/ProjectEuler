#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int a, b, i, curr = 0;
	int max = 1, *A;
	for(a=1;a<100;a++)
		for(b=1;b<100;b++){
			curr = 0;
			A = powerArray(a, b, 200);
			for(i=0;i<200;i++)
				curr += A[i];
			if(curr>max)
				max = curr;
		}
	printf("%d\n", max);
	return 0;	
}
