#include <stdio.h>
#include <stdlib.h>

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
	int A[5050];
	char c;
	int flag = 0, i = 0;
	FILE *fp;
    fp = fopen("./P067.txt", "r");
    while(i<5050)
    {
        c = fgetc(fp);
        if(flag==0){
        	A[i]=atoi(&c)*10;
        	flag++;
        }
        else if(flag==1){
        	A[i]+=atoi(&c);
        	flag++;
        	i++;
        }
        else if(flag==2){
        	if(c=='\n')
        		flag = 0;
        	else if(c==' ')
        		flag = 0;
        	else if(c==EOF)
        		break;
        }
    }
	int sum = maxPath(A, 100, 5050);
	printf("%d\n",sum);
	return 0;
}
