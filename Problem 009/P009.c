#include <stdio.h>

int main(){
	int a, b, c;
	for(a=3;a<=997;a++)
		for(b=2;b<a;b++)
			for(c=1;c<b;c++){
				if(a+b+c==1000){
					if(c*c + b*b == a*a){
						printf("%d\n",a*b*c);
						return 0;
					}
				}
			}
	return 0;
}
