#include <stdio.h>
#include <stdlib.h>

//File P13.txt is should be the same folder in my library. 
//The 100 numbers are appended without spaces or gaps and stored in the file.
int main()
{
    int i,j,k;
    FILE *fptr;
    char c;
    int fin[54] = {0};
    int a[50] = {0};
    fptr = fopen("P13.txt","r");
    for(i=49;i>=0;i--){
        c = getc(fptr);
        fin[i] = c - '0';
    }
    for(j=0;j<99;j++){
        for(k=49;k>=0;k--){
            c = getc(fptr);
            a[k] = c - '0';
            fin[k] += a[k];
        }
    }
    for(i=1;i<54;i++)
        fin[i] += fin[i-1]/10;
    for(i=0;i<54;i++)
        fin[i] = fin[i]%10;
    for(i=53;i>=0;i--)
        printf("%d",fin[i]);
    printf("\n");
    return 0;
}
