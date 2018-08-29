#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int table[1000] = {0};
int count = 0;

int isPalindrome(int* A, int size){
	if(size==1)
		return 1;
	for(int i=0;i<size/2;i++)
		if(A[i]!=A[size-1-i])
			return 0;
	return 1;
}

int isLychrel(int* A, int size, int itr){
	//printf("%d\n", itr);
	if(itr>49)
		return 0;
	if(size>5){
		int n = AtoN(A, size);
		if(occurrence(table, 1000, n)==1)
			return 1;
		else{
			int *B;
			B = reverseArray(A, size);
			B[0] += A[0];
			for(int i=1;i<size;i++){
				B[i] += A[i] + B[i-1]/10;
				B[i-1] = B[i-1]%10;
			}
			if(B[size-1]>9){
				int *C;
				C = (int*)malloc((size+1)*sizeof(int));
				for(int i=0;i<size;i++)
					C[i] = B[i];
				C[size] = C[size-1]/10;
				C[size-1] = C[size-1]%10;
				if(isPalindrome(C, size+1)==1){
					table[count] = n;
					count++;
					return 1;
				}
				else if(isLychrel(C, size+1, itr+=1)==1){
					table[count] = n;
					count++;
					return 1;
				}
				else 
					return 0;
			}
			else if(isPalindrome(B, size)==1){
				table[count] = n;
				count++;
				return 1;
			}
			else if(isLychrel(B, size, itr+=1)==1){
				table[count] = n;
				count++;
				return 1;
			}
			else 
				return 0;
		}
	}
	else{
		int *B;
		B = reverseArray(A, size);
		B[0] += A[0];
		for(int i=1;i<size;i++){
			B[i] += A[i] + B[i-1]/10;
			B[i-1] = B[i-1]%10;
		}
		if(B[size-1]>9){
			int *C;
			C = (int*)malloc((size+1)*sizeof(int));
			for(int i=0;i<size;i++)
				C[i] = B[i];
			C[size] = B[size-1]/10;
			C[size-1] = B[size-1]%10;
			if(isPalindrome(C, size+1)==1)
				return 1;
			else if(isLychrel(C, size+1, itr+=1)==1)
				return 1;
			else 
				return 0;
		}
		else if(isPalindrome(B, size)==1)
			return 1;
		else if(isLychrel(B, size, itr+=1)==1)
			return 1;
		else 
			return 0;
	}
}

int main(){
	int i, num = 0, size;
	int *I, a[] = {1, 1, 9, 8, 1};
	for(i=9999;i>=1;i--){
		I = arrayOfDigits(i, &size);
		if(isLychrel(I, size, 1)==0)
			num++;
	}
	printf("%d\n", num);
	if(isPalindrome(a, 5)==1)
		printf("\n");
	return 0;
}
