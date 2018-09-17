#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int *a, length, k;
	int i, j, count, total = 0;
	for(i=1;;i++){
		count = 0;
		for(j=1;j<10;j++){
			a = powerArray(j, i);
			for(k=199;k>0;k--)
				if(a[k] != 0)
					break;
			if(k+1==i)
				count++;
		}
		total += count;
		if(count<=0){
			printf("%d\n", total);
			return 0;
		}
	}
}
