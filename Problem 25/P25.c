#include <stdio.h>

int main(){
    int i,k,temp, count;
    int f1[1000],f2[1000];
    f1[0] = 1;
    f2[0] = 1;
    for(i=1;i<1000;i++){
        f1[i] = 0;
        f2[i] = 0;
    }
    count = 2;
    while(f2[999]!=1){
        for(i=0;i<1000;i++){
            temp = f1[i] + f2[i];
            f1[i] = f2[i];
            f2[i] = temp;
        }
        for(k=1;k<1000;k++){
			f1[k] = f1[k]+f1[k-1]/10;
			f2[k] = f2[k]+f2[k-1]/10;
        }
		for(k=0;k<1000;k++){
			f1[k] = f1[k]%10;
			f2[k] = f2[k]%10;
        }
        count++;
    }
    printf("%d\n",count);
    return 0;
}
