#include <stdio.h>
#include "../../Library/lib.h"
//for lib.h check https://github.com/ThornOfCamor/Library

long long int lcmn(int n){
	if(n==1)
		return 1;
	long long int k = lcmn(n-1);
	if(k%n==0)
		return k;
	else
		return lcm(k,n);
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%lld\n",lcmn(n));
	return 0;
}
