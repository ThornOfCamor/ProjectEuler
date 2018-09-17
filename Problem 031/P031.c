#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int coins[] = { 1, 2, 5, 10, 20, 50, 100, 200};

int nextHighest(int highest){
	if(occurrence(coins, 8, highest) == 0)
		return 0;
	if(highest == 1)
		return 0;
	int i;
	for(i=1;i<8;i++)
		if(highest == coins[i])
			return coins[i-1];
}

int xyz(int total, int highest){
	if(occurrence(coins, 8, highest) == 0)
		return 0;
	if(highest>total)
		return xyz(total, nextHighest(highest));
	if(highest == 1)
		return 1;
	int ans, i;
	if(total%highest == 0)
		ans = 1;
	else 
		ans = 0;
	if(total%highest==0)
		for(i=0;i<total/highest;i++)
			ans += xyz(total-(i*highest), nextHighest(highest));
	else
		for(i=0;i<=total/highest;i++)
			ans += xyz(total-(i*highest), nextHighest(highest));
	return ans;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n", xyz(n, 200));
}
