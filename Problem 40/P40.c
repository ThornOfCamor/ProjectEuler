#include <stdio.h>

int main(){
	int i,j=0;
	int Prod = 5;
	i = 100+((1000-189)/3);
	for(j = 3; j>(1000-189)%3;j--)
		i = i/10;
	Prod = Prod*(i%10);
	i = 1000+((10000-2700-180-9)/4);
    for(j = 4; j>(10000-2700-180-9)%4;j--)
		i = i/10;
	Prod = Prod*(i%10);
	i = 10000+((100000-36000-2700-180-9)/5);
	for(j = 5; j>(100000-36000-2700-180-9)%5;j--)
		i = i/10;
	Prod = Prod*(i%10);
	i = 100000+((1000000-450000-36000-2700-180-9)/6);
	for(j = 6; j>(1000000-450000-36000-2700-180-9)%6;j--)
		i = i/10;
	Prod = Prod*(i%10);
	printf("%d\n",Prod);
	return 0;
}
