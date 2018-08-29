#include <stdio.h>

int main(){
	int i,j=0;
	int Prod = 5;
	i = 101;
	for(j = 3; j>1;j--)
		i = i/10;
	Prod = Prod*(i%10);
	i = 1003;
    for(j = 4; j>3;j--)
		i = i/10;
	Prod = Prod*(i%10);
	i = 10001;
	for(j = 5; j>1;j--)
		i = i/10;
	Prod = Prod*(i%10);
	i = 100000+((511111)/6);
	for(j = 6; j>(511111)%6;j--)
		i = i/10;
	Prod = Prod*(i%10);
	printf("%d\n",Prod);
	return 0;
}
