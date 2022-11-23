#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main()
{
    int a,b,c;
    char char1,char2;
    float r,area;

    a = 2147483647;
    b = 10;
    r = 10;
    area = PI*r*r;

    char1 = 65;  //A
    char2 = 'b';

    printf("Masukkan nilai a : ");
    scanf(" %d",&a);
    printf("Masukkan nilai b : ");
    scanf(" %d",&b);
    printf("isi dari a adalah : %d\n\a",a);
    printf("isi dari b adalah : %d\n",b);
    printf("isi dari char1 adalah : %c\n",char1+32);   //tolower
    printf("isi dari char2 adalah : %c\n",char2-32);  //toUPPER

    c = b;
    b = a;
    a = c;

    printf("isi dari a adalah : %d\n",a);
    printf("isi dari b adalah : %d\n",b);

    int alas, tinggi, luas;
    alas = 5;
    tinggi = 5;
    luas = 0.5*alas*tinggi;

    printf("Luas segitiga = %d",luas);



    return 0;
}
