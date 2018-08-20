#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int isTri(long int n){
	int i;
	i = sqrtN(2*n);
	if(i+1==n/i)
		return 1;
	return 0;
}

int isPen(long int n){
	int i;
	long int k;
	k = 2*n;
	for(i=165;i*i<(n);i++)
		if(k%i==0 && ((k/i)==3*i-1))
			return 1;
	return 0;
}

int main(){
	int i;
	i = 144;
	while(1){
        if(isPen(i*(2*i-1))==1){
            printf("%d\n", i*(2*i-1));
            return 0;
        }
        i++;
	}
	return -1;
}
