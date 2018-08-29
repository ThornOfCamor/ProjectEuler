#include <stdio.h>

int isPentagonal(int n){
	int i = 1;
	int k = 2*n;
	while(i*i<k){
		if(k%i==0 && k/i == (3*i-1))
			return 1;
		i++;
	}
	return 0;
}

int main(){
	int k;
	int i, n, m;
	for(i=1;;i++){
		n = (i*(3*i-1))/2;
		for(k=i-1;k>0;k--){
			m = (k*(3*k-1))/2;
			if(isPentagonal(n-m)==1 && isPentagonal(m+n)==1){
				printf("%d\n", n-m);
				return 0;
			}
		}
	}
	return 0;
}
