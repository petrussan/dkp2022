#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,j,acak;

    srand(time(NULL));

    for(j=0;j<10;j++){
        for(i=0;i<10;i++) {
            acak = rand()%6+1;
            printf("%d ",acak);
        }
        printf("\n");
    }
    return 0;
}
