#include <stdio.h>

int lt20[20] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
int tens[] = {6, 6, 5, 5, 5, 7, 6, 6};
int hundereds[] = {10, 10, 12, 11, 11, 10, 12, 12, 11};

int countNum(int n){
	if(n<20)
		return lt20[n];
	if(n<100)
		return tens[n/10 - 2] + countNum(n%10);
	if(n<1000)
		if(n%100 == 0)
			return hundereds[n/100 - 1];
		else
			return hundereds[n/100 - 1] + 3 + countNum(n%100);
	if(n==1000)
		return 11;
}

int main(){
	int i;
	int sum = 0;
	for(i=1;i<=1000;i++)
		sum += countNum(i);
	printf("%d\n", sum);
	return 0;
}
