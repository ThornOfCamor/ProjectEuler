#include <stdio.h>

//Sum of first n natural numbers = n*(n+1)/2
//Sum of squares of first n natural numbers = n*(n+1)*(2n+1)/6 
int main(){
	int n;
	scanf("%d",&n);
	printf("%lld\n",(n*((n*n)-1)*((3*n)+2))/12);
	return 0;
}
