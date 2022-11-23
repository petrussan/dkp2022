#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v = 100;
    int *pv;   // deklarasi pointer
    int w;
    int *pw;

    pv = &v;
    w = *pv;
    pw = &w;

    printf("v = %d &v = %X pv = %X  *pv = %d\n",
           v,&v,pv,*pv);
    printf("w = %d &w = %X pw = %X  *pw = %d\n",
           w,&w,pw,*pw);

    return 0;
}
