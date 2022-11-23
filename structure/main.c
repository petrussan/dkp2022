#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int day;
    int month;
    int year;
} date;

typedef struct {
    char NRP[10];
    char nama[100];
    date tgllahir;
    char alamat[200];
    float ipk;
} mhs;

int main()
{
    int i;
    int n;
    mhs mahasiswa[100];

    printf("Mau memasukkan berapa data? ");
    scanf(" %d",&n);

    for (i=0;i<n;i++) {
        printf("Masukkan NRP : ");
        scanf(" %s",&mahasiswa[i].NRP);
        printf("Masukkan Nama : ");
        scanf(" %[^\n]",&mahasiswa[i].nama);
        printf("Masukkan alamat : ");
        scanf(" %[^\n]",&mahasiswa[i].alamat);
        printf("Masukkan tanggal lahir (dd-mm-yyyy): ");
        scanf(" %d-%d-%d",&mahasiswa[i].tgllahir.day,
              &mahasiswa[i].tgllahir.month,
              &mahasiswa[i].tgllahir.year);
        printf("Masukkan IPK : ");
        scanf(" %f",&mahasiswa[i].ipk);
    }

    printf("\nData yang dimasukkan : \n");
    for (i=0;i<n;i++) {
        printf("%s - ",mahasiswa[i].NRP);
        printf("%s\n",mahasiswa[i].nama);
        printf("%s\n",mahasiswa[i].alamat);
        printf("%d-%d-%d\n",mahasiswa[i].tgllahir.day,
               mahasiswa[i].tgllahir.month,
               mahasiswa[i].tgllahir.year);
        printf("%f\n\n",mahasiswa[i].ipk);
    }

    return 0;
}
