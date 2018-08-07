#include <stdio.h>

// Max Path of triangle or binary tree.
// Give numbers of triangle in A with A[0] as top most.
// rows = height of triangle, rows = bottom most row.
// numbers = total number of numbvers in the triangle.

int maxPath(int *A,int rows, int numbers){
	if(numbers==1){
		if(rows==1)
			return A[0];
		else
			return -1;
	}
	else if(numbers<0 |numbers<rows)
		return -1;
	int i=0;
	for(i=numbers-(2*rows)+1;i<numbers-rows;i++){
		if(A[i]+A[i+rows-1]>A[i]+A[i+rows])
			A[i]+=A[i+rows-1];
		else
			A[i]+=A[i+rows];
	}
	return maxPath(A, rows-1,numbers-rows);
}

int main(){
	int A[] = {75, 95, 64,17, 47, 82, 18, 35, 87, 10, 20, 4, 82, 47, 65, 19, 1, 23, 75, 3, 34, 88, 2, 77, 73, 7, 63, 67, 99, 65, 4, 28,
				6, 16, 70, 92, 41, 41, 26, 56, 83, 40, 80, 70, 33, 41, 48, 72, 33, 47, 32, 37, 16, 94, 29, 53, 71, 44, 65, 25, 43, 91,
				52, 97, 51, 14, 70, 11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57, 91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29,	48, 63,
				66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31, 4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23};
	int sum = maxPath(A, 15, 120);
	printf("%d\n",sum);
	return 0;
}
