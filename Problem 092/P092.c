#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int arr[568] = {0};

//Only 7*81 = 568 is the highest number that can be called in the second iteration. 
//So the answers for those numbers have been stored in arr.
int is89(int n){
	if(n==1)
		return 0;
	else if(n==89)
		return 1;
	if(n<568)
		if(arr[n]==2)
			return 1;
		else if(arr[n]==1)
			return 0;
	int sum = 0, size, i, k;
	size = n;
	while(size>0){
		k = size%10;
		sum += k*k;
		size /= 10;
	}
	if(is89(sum)==1){
		if(n<568)
			arr[n] = 2;
		return 1;
	}
	else if(is89(sum)==0){
		if(n<568)
			arr[n] == 1;
		return 0;
	}
}

int main(){
	long int i;
	int ans = 0;
	for(i=2;i<10000000;i++)
		if(is89(i)==1)
			ans++;
	printf("%d\n", ans);
	return 0;
}
