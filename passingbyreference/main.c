#include <stdio.h>
#include <stdlib.h>

void fun1(int u,int v);
void fun2(int *pu, int *pv);

int main()
{
    int u = 10;
    int v = 20;

    printf("\nsebelum fun1: u=%d v=%d",u,v);
    fun1(u,v);
    printf("\nsetelah fun1: u=%d v=%d",u,v);

    printf("\nsebelum fun2: u=%d v=%d",u,v);
    fun2(&u,&v);
    printf("\nsetelah fun2: u=%d v=%d",u,v);
    return 0;
}

void fun1(int u,int v) {
    u=0; v=0;
    printf("\ndalam fun1 : u = %d v = %d",u,v);
}

void fun2(int *pu, int *pv) {
    *pu = 0; *pv=0;
    printf("\ndalam fun2: *pu = %d *pv = %d",*pu,*pv);
}
