#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i;
    int *x;

    printf("Mau memasukkan berapa banyak data ? ");
    scanf(" %d",&n);

    x = (int *) malloc(n*sizeof(int));

    //malloc, calloc, free, realloc

    for (i=0;i<n;i++) {
        printf("Masukkan data : ");
        scanf(" %d",&x[i]);
    }

    for (i=0;i<n;i++) {
        printf(" %d",x[i]);
    }



/*    scanf(" %d",&n);

    int arr1[n];

    for (i=0;i<n;i++) {
        scanf(" %d",&arr1[i]);
    }
    for (i=0;i<n;i++) {
        printf(" %d",arr1[i]);
    } */


    return 0;
}
