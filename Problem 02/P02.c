#include <stdio.h>

long int sum = 2;

void fibbi(long int n_1, long int n_2){
	long int a, b;
	a = 3*n_1 + 2*n_2;
	if(a<4000000){
		sum += a;
		b = 2*n_1 + n_2;
		fibbi(a,b);
	}
	else
		printf("%ld\n",sum);
}

int main(){
	fibbi(2,1);
	return 0;
}
