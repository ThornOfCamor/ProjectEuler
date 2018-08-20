#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
	FILE *fp;
	fp = fopen("./P42.txt", "r");
	char c;
	int i;
	int sum = 0, flag = 0, flag2 = 0;
	int num = 0, a;
	while(1){
		c = fgetc(fp);
		switch(c){
			case '"':	if(flag2==1)
							flag2 = 0;
						else 
							flag2 = 1;
						break;
			case ',':	break;
			case EOF:
				flag = 1;
				break;
			case 'A':	sum += 1;
						break;
			case 'B':	sum += 2;
						break;
			case 'C':	sum += 3;
						break;
			case 'D':	sum += 4;
						break;
			case 'E':	sum += 5;
						break;
			case 'F':	sum += 6;
						break;
			case 'G':	sum += 7;
						break;
			case 'H':	sum += 8;
						break;
			case 'I':	sum += 9;
						break;
			case 'J':	sum += 10;
						break;
			case 'K':	sum += 11;
						break;
			case 'L':	sum += 12;
						break;
			case 'M':	sum += 13;
						break;
			case 'N':	sum += 14;
						break;
			case 'O':	sum += 15;
						break;
			case 'P':	sum += 16;
						break;
			case 'Q':	sum += 17;
						break;
			case 'R':	sum += 18;
						break;
			case 'S':	sum += 19;
						break;
			case 'T':	sum += 20;
						break;
			case 'U':	sum += 21;
						break;
			case 'V':	sum += 22;
						break;
			case 'W':	sum += 23;
						break;
			case 'X':	sum += 24;
						break;
			case 'Y':	sum += 25;
						break;
			case 'Z':	sum += 26;
						break;
		}
		if(flag==1)
			break;
		if(flag2==0){
			a = sqrtN(2*sum);
			if(isSqrt(2*sum)==0)
				if(a*(a+1)==2*sum)
					num++;
			else if(sum==1)
				num++;
			sum = 0;
		}
	}
	printf("%d\n", num);
	return 0;
}
