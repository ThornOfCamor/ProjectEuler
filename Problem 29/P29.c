#include <stdio.h>

//Total possibilities for a = 99
//a^6: 64;
//a^5: 32;
//a^4: 16, 81;
//a^3: 8,27;
//a^2: 4, 9, 25, 36, 49, 100;
//Numbers that will give all unique powers = 99-1-1-2-2-6 = 87
//Each of these 87 will will give unique power for 2 <= b <= 100, i.e. 99 each.
//87*99 numbers come with duplication

//a^2 values will have first 49 values duplicated, i.e. 50 values provided by each.

//For a^3, there would be 67 terms greater than a^100. But we have counted some terms under a^2.
//We have counted a^6 terms in a^2. There are 17 of these terms in a^100 < x <= a^200
//So 67-17 = 50 terms for a^3.

//For a^4, all powers below a^200 are duplicated. Leaving 50 terms.
//For x, a^200 < x <= a^300, a^12 terms have been counted under a^3.
//There are 9 terms for x in the given region. 
//Therefore there are 41 unique terms contributed by a^4.

//First 20 terms of a^5 are under a^100, hence are duplicated. 80 terms remain.
//For a^100 < x <= a^200, a^10 have been counted in a^2 (10 terms) and a^15 terms have counted in a^3 (7 terms).
//That leaves 63 terms, but a^30 terms (3 terms) have been removed twice, i.e. 66 terms actually remain.
//For a^200 < x <= a^300, a^15 terms (7 terms) and a^20 terms (5 terms) have been counted.
//That leaves 54 terms for a^5. But a^60 (2 terms) have been removed twice, i.e. 56 terms remain.
//For a^300 < x <= a^400, a^20 terms (5 terms) have been counted. 
//Therefore a^5 provides 51 unique terms.

//First 49 terms of a^6 perfectly coincide with a^3 terms.
//For a^300 < x <= a^400, a^12 terms (8 terms) and a^30 terms (3 terms) have been counted.
//That leaves 39 terms, but a^60 terms (1 term) have been removed twice, i.e. 40 terms remain.
//For a^400 < x <= a^500, a^30 terms (3 terms) have been counted.
//Therefore a^6 gives 37 unique terms.
int main(){
	int ans = 87*99 + 6*50 + 2*50 + 2*41 + 51 + 37;
	printf("%d\n", ans);
	return 0;
}
