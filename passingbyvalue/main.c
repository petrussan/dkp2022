#include <stdio.h>
#include <stdlib.h>

void proses(int b) {
    b = b+1;
    printf("Nilai b : %d",b);
}

int main()
{
    int a;
    a=100;
    proses(a);
    printf("Nilai a di main : %d",a);
    return 0;
}
