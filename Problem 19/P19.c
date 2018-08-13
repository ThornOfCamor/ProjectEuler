#include <stdio.h>

//Month values: January:1, February:2, March:3, April:4, May:5, June:6, July:7, August:8, September:9, October:10, November:11, December:12
//Day Values: Sunday:0, Monday:1, Tuesday:2, Wednesday:3, Thursday:4, Friday:5, Saturday:6
int getNextFirst(int curr, int month, int leap){
	if(leap==0){
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
			return (curr + 3)%7;
		else if(month==4||month==6||month==9||month==11)
			return (curr + 2)%7;
		else
			return curr;
	}
	else{
		if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
			return (curr + 3)%7;
		else if(month==4||month==6||month==9||month==11)
			return (curr + 2)%7;
		else
			return (curr + 1)%7;
	}
}

int main(){
	int first = 2;
	int month = 1;
	int count = 0;
	int year = 1900;
	for(year=1901;year<2001;year++){
		if(year%400==0)
			for(month = 1; month <= 12; month++){
				if(first==0)
					count++;
				first = getNextFirst(first, month, 1);
			}
		else if(year%100==0)
			for(month = 1; month <= 12; month++){
				if(first==0)
					count++;
				first = getNextFirst(first, month, 0);
			}
		else if(year%4==0)
			for(month = 1; month <= 12; month++){
				if(first==0)
					count++;
				first = getNextFirst(first, month, 1);
			}
		else
			for(month = 1; month <= 12; month++){
				if(first==0)
					count++;
				first = getNextFirst(first, month, 0);
			}
	}
	printf("%d\n", count);
	return 0;
}
