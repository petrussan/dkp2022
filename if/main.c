#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int big,small;

    a = 10;
    b = 100;

    if (a<b) {
        big = b;
        small = a;
    } else {
        big = a;
        small = b;
    }
    printf("bilangan terbesar : %d\n",big);
    printf("bilangan terkecil : %d\n",small);

    return 0;
}
