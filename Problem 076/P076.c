#include <stdio.h>

// Code doesn't work
long long int arr[100][100];

long long int combinatrics(int n, int i, int k){
	if(arr[n-1][i-1]>=0)
                return arr[n-1][i-1];
	if(i==1 || i==n){
		arr[n-1][i-1] = 1;
		return 1;
	}
	if(i>n)
		return 0;
	if(i==0)
		return 0;
	long long int sum = 0;
	int  m = n + 2 - i;
	if(n%i==0){
		while(m>n/i){
			m--;
			if(m<=k){
				sum += combinatrics(n-m, i-1, m);
				if(combinatrics(n-m, i-1, m)==0)
					break;
			}
		}
	}
	else{
		while(m>(n/i)+1){
			m--;
			if(m<=k){
				sum += combinatrics(n-m, i-1, m);
				if(combinatrics(n-m, i-1, m)==0)
                                	break;
			}	
		}
	}
	arr[n-1][i-1] = sum;
	return sum;
}

int main(){
	int i, j;
	int sum = 0;
	for(i=0;i<100;i++)
		for(j=0;j<100;j++)
			arr[i][j] = -1;
	long long int ans = 0;
	int m = 100;
	for(int i=2;i<=m;i++){
		ans += combinatrics(m, i, m);
		//printf("%d, %lld, %lld\n", i, arr[99][i-1], ans);
	}
	ans = 0;
	for(i=1;i<99;i++){
		ans = 0;
		for(j=0;j<99;j++)
			if(arr[j][i-1]>=1){
				printf("%lld\n", arr[j][i-1]);
				ans += arr[j][i-1];
			}
		printf("%lld\n", ans);
		arr[99][i] = ans;
	}
	sum = 0;
	for(i=48;i<99;i++)
		if(arr[i][48] >= 1)
			sum += arr[i][48];
	printf("%lld, %lld, %d\n", arr[99][50], ans, sum);
	printf("%lld\n", combinatrics(100, 50, 100));
	for(i=0;i<100;i++)
		printf("%lld\n", arr[99][i]);
	return 0;
}
