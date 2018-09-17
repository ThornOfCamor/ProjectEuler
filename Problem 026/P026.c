#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int t,j,i;
	int currentHigh = 6;
	int a[1000] = {0};
	int count,k;

	for(i=999;i>currentHigh; i--){
        t = 1000;
        count = 0;
        for(k=0;k<1000;k++)
            a[k] = i;
        while(1){
            t = t%i;
            if(occurrence(a, 1000, t)==1)
            	break;
            else{
                a[count] = t;
                count++;
                t = t*1000;
            }
        }
        if(count>currentHigh)
            currentHigh = count;
	}
	printf("%d\n",currentHigh);
	return 0;
}
