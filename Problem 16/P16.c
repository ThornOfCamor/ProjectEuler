#include <stdio.h>

int main(){
	int arr[310] = {0};
	arr[0] = 2;
	int i,j,sum = 0;
	for(i=0;i<999;i++){
		arr[0] = arr[0]*2;
		for(j=1;j<310;j++)
			arr[j] = 2*arr[j] + arr[j-1]/10;
		for(j=0;j<310;j++)
			arr[j] = arr[j]%10;
	}
	for(i=0;i<310;i++){
		sum += arr[i];
	}
	printf("%d\n", sum);
	return 0;
}
