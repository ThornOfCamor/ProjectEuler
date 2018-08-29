#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
    int i,j = 1;
    int flag = 0;
    i = 1000;
    while(i<10000){
        flag =0;
        if(isPrime(2*i+1)==1)
            i++;
        else{
            for(j=1;j<i;j++)
                if(isPrime(2*j+1)==1)
                    if(isSqrt(i-j)==1)
                        flag++;
            if(flag==0){
                    printf("%d\n",2*i+1);
                    return 0;
                }
            else
                i++;
        }
    }
    return 1;
}
