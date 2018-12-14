#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int D, l, k;
	int highD = 73;
	long long int sol, highsol = 44511, i2, Dj2, i;
	scanf("%d", &l);
	scanf("%d",&k);
	scanf("%lld", &highsol);
	scanf("%d", &highD);

	for(D=l;D<=k;D++){
		if(isSqrt(D)==0)
			for(i=2;;i++){
				i2 = i*i;
				if((i2-1)%D==0){
					if(isSqrt((i2-1)/D)==1){
						if(i>highsol){
							highsol = i;
							highD = D;
							printf("i: %lld, D: %d\n", i, D);
						}
						break;
					}
				}
			}
	}
	printf("%d, %lld\n", highD, highsol);
	return 0;
}
