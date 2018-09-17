#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int i, digi, j;
	long long int sum, ans = 0;
	int *ari;
	for(i=3;i<50000;i++){
		ari = arrayOfDigits(i, &digi);
		sum = 0;
		for(j=0;j<digi;j++)
			sum += fact(ari[j]);
		if(sum==i){
			ans += i;
		}
	}
	printf("%lld\n", ans);
	return 0;
}
