#include <stdio.h>

int main(){
	int a,b,p, count, highest = 0, max;
	for(p=12;p<=1000;p++){
		count = 0;
		for(a=4;p-a>a;a++)
			for(b=3;b<a&&p-b>b;b++)
				if(p-b-a<a&&a*a == b*b + (p-b-a)*(p-b-a))
					count++;
		if(count>highest){
			highest = count;
			max = p;
		}
	}
	printf("%d\n",max);
	return 0;
}
