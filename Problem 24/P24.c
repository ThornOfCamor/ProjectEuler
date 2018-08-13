#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
//This code excepts n and provides the number with that rank
//Rank is the technical name for the entry number of a particular entry when all permutations are written in lexicograpical order.
int main(){
	int n;
	scanf("%d",&n);
	n--;
	int k = 0;
	int *arr;
	arr =  (int*)malloc(10*sizeof(int));
	int i, j;
	for(i=1;i<10;i++)
		arr[i] = 10;
	arr[0] = n/fact(9);
	int temp = n%fact(9);
	for(i=1;i<10;i++){
		k = temp/fact(9-i);
		while(temp>=fact(9-i)){
			temp -= fact(9-i);
		}
		for(j=0;j<=k;j++)
			if(occurrence(arr, 10, j)==1){
				k++;
			}
		arr[i] = k;
	}
	for(i=0;i<10;i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
