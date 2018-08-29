#include <stdio.h>
#include "../../Github/Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
    int i;
    int k = 1;
    for(i=2;k<=100000;i++)
        if(isPrime(i)==1)
            k *= i;
    printf("%d\n", k);
    return 0;
}
