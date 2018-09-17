#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i, j, k, count =0;
	int num[500] = {0};
	int nnum[500] = {0};
	int denum[500] = {0};
    int ndenum[500] = {0};
	num[0] = 3;
	denum[0] = 2;
	for(i=1;i<=1000;i++){
	    j=499;
	    while(denum[j]==0)
            j--;
        if(num[j+1]!=0)
            count++;
        nnum[0] = num[0] + 2*denum[0];
        for(j=1;j<500;j++)
            nnum[j] = num[j] + 2*denum[j] + nnum[j-1]/10;
        for(j=0;j<500;j++)
            nnum[j] = nnum[j]%10;
		ndenum[0] = denum[0]+num[0];
		for(j=1;j<500;j++)
            ndenum[j]= denum[j]+num[j]+ndenum[j-1]/10;
        for(j=0;j<500;j++)
            ndenum[j] = ndenum[j]%10;
        for(j=0;j<500;j++){
            num[j] = nnum[j];
            denum[j] = ndenum[j];
        }
	}
	printf("%d\n",count);
	return 0;
}
