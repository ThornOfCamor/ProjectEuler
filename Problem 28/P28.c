#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	long long int ans = 1;
	if(n>1){
		if(n%3==0 && n>6){
			ans = (n-1)/6;
			ans = ans*(4*n*n + 7*n + 15);
		}
		else{
			ans = (n-1)/2;
			ans = ans*(4*n*n + 7*n +15)/3;
		}
	}
	printf("%lld\n", ans+1);
	return 0;
}
