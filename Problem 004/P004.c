#include <stdio.h>

//For 6 digit integers
int checkPalin(int n){
	if(n>0)
		if(n%10 == n/100000)
			if((n/10)%10 == (n/10000)%10)
				if((n/100)%10 == (n/1000)%10)
					return 1;
				else
					return 0;
			else 
				return 0;
		else
			return 0;
	else
		printf("Error: n cannot be negative\n");
	return -1;
}

int main(){
	int i, j;
	for(i=999;i>900;i--)
		for(j=999;j>900;j--)
			if(checkPalin(i*j)==1){
				printf("%d\n",i*j);
				return 0;
			}
	return -1;
}
