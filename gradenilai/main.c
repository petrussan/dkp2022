#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    char stat;

    printf("Masukkan nilai : ");
    scanf(" %f",&num);
    stat = num>=56?'P':'F';
    printf("%c",stat);

//    if ((num>=76) && (num<86))
//        printf("B+\n");
//    else
//    if (num>=86) {
//        printf("A\n");
//        printf("Excellent\n");
//  }
    return 0;
}
