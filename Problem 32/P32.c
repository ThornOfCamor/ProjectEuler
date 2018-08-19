#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	int a, b, c, i, j, count = 0;;
	int *ara, *arb, *arc;
	int ans = 0, arans[10] = {0};
	int diga, digb, digc, flaga, flag;
	for(a=12;a<99;a++){
		ara = arrayOfDigits(a, &diga);
		flaga = 1;
		for(i=0;i<diga;i++)
			if(noOfOccurrences(ara, diga, ara[i])>1){
				flaga = 0;
				break; 
			}
		if(occurrence(ara, diga, 0)==0&&flaga==1){
			for(b=123;a*b<10000;b++){
				arb = arrayOfDigits(b, &digb);
				flag = 1;
				if(occurrence(arb, digb, 0)==0){
					for(i=0;i<digb;i++)
						if(noOfOccurrences(arb, digb, arb[i])>1){
							flag = 0;
							break; 
						}		
					for(i=0;i<diga;i++)
						if(occurrence(arb, digb, ara[i])==1){
							flag = 0;
							break;
						}
					if(flag==1){
						c = b*a;
						arc = arrayOfDigits(c, &digc);
						if(occurrence(arc, digc, 0)==0 && digc==4){
							for(i=0;i<diga;i++)
								if(occurrence(arc, digc, ara[i])==1){
								flag = 0;
								break;
								}
							for(i=0;i<digc;i++)
								if(noOfOccurrences(arc, digc, arc[i])>1){
									flag = 0;
									break; 
								}
							if(flag==1)
								for(i=0;i<digb;i++)
									if(occurrence(arc, digc, arb[i])==1){
										flag = 0;
										break;
									}
							if(flag==1){
								if(occurrence(arans, 10, c)==0){
									arans[count] = c;
									count++;
									ans += c;
								}
							}
						}
					}
				}
			}
		}
	}
	for(a=2; a<10; a++){
		for(b=1234;a*b<10000; b++){
			arb = arrayOfDigits(b, &digb);
			flag = 1;
			for(i=0;i<digb;i++)
				if(noOfOccurrences(arb, digb, arb[i])>1){
					flag = 0;
					break; 
				}
			if(flag == 1 && occurrence(arb, digb, 0)==0 && occurrence(arb, digb, a)==0){
				c = a*b;
				arc = arrayOfDigits(c, &digc);
				for(i=0;i<digc;i++)
					if(noOfOccurrences(arc, digc, arc[i])>1){
						flag = 0;
						break; 
					}
				for(i=0;i<digb;i++)
					if(occurrence(arc, digc, arb[i])==1){
						flag = 0;
						break;
					}
				if(flag==1 && occurrence(arc, digc, a)==0  && occurrence(arc, digc, 0)==0){
					if(occurrence(arans, 10, c)==0){
						arans[count] = c;
						count++;
						ans += c;
						}
				}
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}
