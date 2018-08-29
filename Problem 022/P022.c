#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	fp = fopen("./inputP022.txt", "r");
	char c;
	int i;
	int count = 1, flag = 0;
	long long int sum = 0;
	while(1){
		c = fgetc(fp);
		switch(c){
			case '\n':
				count++;
				break;
			case EOF:
				flag = 1;
				break;
			case 'A':	sum += 1*count;
						break;
			case 'B':	sum += 2*count;
						break;
			case 'C':	sum += 3*count;
						break;
			case 'D':	sum += 4*count;
						break;
			case 'E':	sum += 5*count;
						break;
			case 'F':	sum += 6*count;
						break;
			case 'G':	sum += 7*count;
						break;
			case 'H':	sum += 8*count;
						break;
			case 'I':	sum += 9*count;
						break;
			case 'J':	sum += 10*count;
						break;
			case 'K':	sum += 11*count;
						break;
			case 'L':	sum += 12*count;
						break;
			case 'M':	sum += 13*count;
						break;
			case 'N':	sum += 14*count;
						break;
			case 'O':	sum += 15*count;
						break;
			case 'P':	sum += 16*count;
						break;
			case 'Q':	sum += 17*count;
						break;
			case 'R':	sum += 18*count;
						break;
			case 'S':	sum += 19*count;
						break;
			case 'T':	sum += 20*count;
						break;
			case 'U':	sum += 21*count;
						break;
			case 'V':	sum += 22*count;
						break;
			case 'W':	sum += 23*count;
						break;
			case 'X':	sum += 24*count;
						break;
			case 'Y':	sum += 25*count;
						break;
			case 'Z':	sum += 26*count;
						break;
			default:	sum += i*count;
		}
		if(flag==1)
			break;
	}
	printf("%lld\n", sum);
	return 0;
}
