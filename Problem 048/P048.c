#include <stdio.h>

int main(){
    int a[10] = {0};
    int b[10];
    int i, k, j, n;
    for(n=1;n<=1000;n++){
        b[0] = 1;
        for(i=1;i<10;i++)
            b[i] = 0;
        for(i=1; i<=n;i++){
            b[0] = n*b[0];
            for(k=1;k<10;k++)
                b[k] = n*b[k]+b[k-1]/10;
            for(k=0;k<10;k++)
                b[k] = b[k]%10;
        }
        for(j=0;j<10;j++)
            a[j] += b[j];
        for(k=1;k<10;k++)
            a[k] = a[k]+a[k-1]/10;
        for(k=0;k<10;k++)
            a[k] = a[k]%10;
    }
    for(i=9;i>=0;i--)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}
