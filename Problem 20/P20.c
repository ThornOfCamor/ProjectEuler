#include <stdio.h>

//The number 160 has come after testing with numbers between 150 and 500
int main(){
	int i,j;
	int fact[160] = {0};
	fact[0] = 1;
	int sum = 0;
	for(i=2;i<100;i++){
		fact[0] = fact[0]*i;
		for(j=1;j<160;j++){
			fact[j] = i*fact[j] + fact[j-1]/10;
			fact[j-1] = fact[j-1]%10;
		}
		fact[159] = fact[159]%10;
	}
	for(j=0;j<160;j++)
		sum += fact[j];
	printf("%d\n", sum);
	return 0;
}
