#include <stdio.h>

int main(){
	int mul5, mul3, mul15;
	mul5 = 999/5;
	mul3 = 999/3;
	mul15 = 999/15;
	int ans = 5*mul5*(mul5+1);
	ans += 3*mul3*(mul3+1);
	ans -= 15*mul15*(mul15+1);
	ans = ans/2;
	printf("%d\n",ans);
	return 0;
}
