#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

//    x = 10;
//    while (x<10) {
//        printf("%d\n",x);
//        x++;
//    }

//    do {
//        printf("%d\n",x);
//        x++;
//    } while (x<10);

    float r;
    char yt;

    printf("Program untuk menghitung luas lingkaran");
    do {
        // kode untuk menghitung luas lingkaran berdasarkan nilai r yang dimasukkan pengguna

        printf("Apakah mau dijalankan lagi ? ");
        scanf(" %c",&yt);
        yt=toupper(yt);
    } while (yt=='Y');   // (yt=='Y' || yt=='y');

    return 0;
}
