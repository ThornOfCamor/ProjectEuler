#include <stdio.h>
#include <math.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//There seems to be some problem with math.h module on my system. SO I have used the power5 variable.
int main(){
	int* arr;
	int i, a, j, k, power5;
	long int sum, ans = 0;
	for(i=11;i<1000000;i++){
		arr = arrayOfDigits(i, &a);
		sum = 0;
		for(j=0;j<a;j++){
			power5 = 1;
			for(k=0;k<5;k++)
				power5 *= arr[j];
			sum += power5;
		}
		if(sum == i)
			ans += sum;
	}
	printf("%ld\n", ans);
	return 0;
}
