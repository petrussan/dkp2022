#include <stdio.h>
#include <stdlib.h>

long long int factorial(int n);

int main()
{
    int n;

    printf("n = ");
    scanf (" %d",&n);
    printf(" %d! = %lld",n,factorial(n));
    return 0;
}

long long int factorial(int n) {
    if (n<1) {
        printf("Tidak bisa dihitung\n");
        return(-1);
    } else if (n==1) {
        return(1);
    } else {
        return (n*factorial(n-1));
    }
}


