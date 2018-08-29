#include <stdio.h>
#include <stdlib.h>

void path(int** b, int n1, int n2, int itr){
	if(itr >= 158)
		return;
	int i;
	if(itr<79){
		b[0][itr+1] += b[0][itr];
		b[itr+1][0] += b[itr][0];
		for(i=1;i<=itr;i++){
			if(b[i][itr-i+1]+b[i-1][itr-i+1]>b[i][itr-i+1]+b[i][itr-i])
				b[i][itr-i+1] += b[i][itr-i];
			else
				b[i][itr-i+1] += b[i-1][itr-i+1];
		}
		path(b, n1, n2, itr+1);
		return;
	}
	else
		for (i=itr-78;i<80;i++){
			if(b[i][itr-i+1]+b[i-1][itr-i+1]>b[i][itr-i+1]+b[i][itr-i])
				b[i][itr-i+1] += b[i][itr-i];
			else
				b[i][itr-i+1] += b[i-1][itr-i+1];
		}
	path(b, n1, n2, itr+1);
	return;
}

int main(){
	FILE *fp;
	fp = fopen("./P081.txt", "r");
	char c;
	int **b;
	b = (int**)malloc(80*sizeof(int*));
	for(int i=0;i<80;i++)
		b[i] = (int*)malloc(80*sizeof(int));
	int i = 0, j = 0;
	for(i=0;i<80;i++)
		for(j=0;j<80;j++)
			b[i][j] = 0;
	i = 0;
	j = 0;
	while(i<80 && j<80){
		c = fgetc(fp);
		if(c == EOF)
			break;
		else if(c == ',')
			j++;
		else if(c == '\n'){
			i++;
			j = 0;
		}
		else{
			b[i][j] *= 10;
			b[i][j] += atoi(&c);
		}
	}
	path(b, 80, 80, 0);
	printf("%d\n", b[79][79]);
	return 0;
}
