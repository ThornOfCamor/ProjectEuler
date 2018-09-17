#include <stdio.h>
#include "../../Library/lib.h"

//for lib.h check https://github.com/ThornOfCamor/Library
int main(){
    int i, j, k, l, g;
    float m, n;
    int num = 1, denum = 1;
    for(i=10;i<99;i++){
        for(j=i+1;j<100;j++){
            n = (float)i/(float)j;
            if(i%10 == j%10 && i%10 != 0){
                k = i/10;
                l = j/10;
                m = (float)k/(float)l;
                if(m==n){
                    g = gcd(i,j);
                    num *= i/g;
                    denum *= j/g;
                }
            }
            else if(i%10 == j/10 && i%10 != 0){
                k = i/10;
                l = j%10;
                m = (float)k/(float)l;
                if(m==n){
                    g = gcd(i,j);
                    num *= i/g;
                    denum *= j/g;
                }
            }
            else if(i/10 == j%10 && i%10 != 0){
                k = i%10;
                l = j/10;
                m = (float)k/(float)l;
                if(m==n){
                    g = gcd(i,j);
                    num *= i/g;
                    denum *= j/g;
                }
            }
            else if(i/10 == j/10 && i%10 != 0){
                k = i%10;
                l = j%10;
                m = (float)k/(float)l;
                if(m==n){
                    g = gcd(i,j);
                    num *= i/g;
                    denum *= j/g;
                }
            }
        }
    }
    g = gcd(num, denum);
    num /= g;
    denum /= g;
    printf("%d\n", denum);
    return 0;
}
