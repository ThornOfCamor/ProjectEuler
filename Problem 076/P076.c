#include <stdio.h>

// Code doesn't work
long long int combinatrics(int n, int i){
	long long int sum = 1;
	int j;
	if(n<=1)
		return 1;
	for(j=1;j<=n/2;j++)
		if(j>=i)
			sum += combinatrics(n-j,j);
	return sum;
}

int main(){
	long long int ans = combinatrics(100,1);
	printf("%lld\n",ans-1);
	return 0;
}
