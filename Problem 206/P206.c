#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	long long int i;
	long long int *a;
	for(i=100000003;i<140000000;i+=6){
		a = powerArray(i, 2, 18);
		if(a[2]==8)
			if(a[4]==7)
				if(a[6]==6)
					if(a[8]==5)
						if(a[10]==4)
							if(a[12]==3)
								if(a[14]==2)
									if(a[16]==1){
										printf("%lld\n", 10*i);
										return 0;
									}
		i += 4;
		a = powerArray(i, 2, 18);
		if(a[2]==8)
			if(a[4]==7)
				if(a[6]==6)
					if(a[8]==5)
						if(a[10]==4)
							if(a[12]==3)
								if(a[14]==2)
									if(a[16]==1){
										printf("%lld\n", 10*i);
										return 0;
									}
	}
	return 0;
}
