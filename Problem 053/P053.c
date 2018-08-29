#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int r, n;
	long long int k;
	int flag, count = 0;
	for(n=22;n<=100;n++){
	    flag = 0;
		if(n%2==0)
			for(r=3;r<=n/2;r++){
				k = nCr(n,r);
				if(k>=1000000 && flag==0){
					count += ((n - 2*r) +1);
					flag = 1;
				}
			}
		else
			for(r=3;r<=(n-1)/2;r++){
				k = nCr(n,r);
				if(k>=1000000 && flag==0){
					count += ((n - 2*r) +1);
					flag = 1;
				}
			}
	}
	printf("%d\n", count);
    return 0;
}
