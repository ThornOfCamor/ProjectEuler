#include <stdio.h>

int table[10000];
int collatzNo(int n){
    if(n==1)
        return 1;
    else if(n%2==0)
        return 1+collatzNo(n/2);
    else
        return 1+collatzNo(3*n+1);
}

int collatzNoUsingTable(long long int n){
    if(n<=10000)
        return table[n-1];
    else if (n%2==0)
        return 1 + collatzNoUsingTable(n/2);
    else
        return 1 + collatzNoUsingTable(3*n+1);
}

int main(){
    int i;
    int max = 1, curr;
    for(i=0;i<10000;i++)
        table[i] = collatzNo(i+1);
    for(i=100000;i<1000000;i++){
        curr = collatzNoUsingTable(i);
        if(curr>max)
            max = curr;
    }

    printf("%d\n",max);
    return 0;
}
