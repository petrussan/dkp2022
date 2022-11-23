#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[5] = {1,45,3,20,31};
    int i,j,dummy;
    int swapped;

    j=0;
    for (i=0;i<5;i++)
        printf("%d\n",x[i]);
    printf("\n");

//    for (j=0;j<4;j++)
    do {
        j++;
        swapped=0;
        for(i=0;i<4;i++)
            if(x[i]>x[i+1]) {
                dummy=x[i];
                x[i]=x[i+1];
                x[i+1]=dummy;
                swapped=1;
            }
    } while (swapped==1);

    printf("%d\n\n",j);
    for (i=0;i<5;i++)
        printf("%d\n",x[i]);
    printf("\n");

    return 0;
}
