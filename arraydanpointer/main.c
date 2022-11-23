#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10] = {10,20,30,40,50,60,70,80,90,100};
C:\Users\TUTOR-PA\Documents\New folder\alokasidinamis\alokasidinamis.cbp    int i;

    for(i=0;i<10;i++) {
        printf("\ni = %d x[i] = %d *(x+i) = %d",
               i,x[i],*(x+i));
        printf(" &x[i] = %X  (x+i)=%X",&x[i],(x+i));
    }
    return 0;
}
