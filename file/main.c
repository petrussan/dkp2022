#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data,i;

    FILE *pfile;  //establish buffer area

    pfile = fopen("data.txt","w"); //inisialisasi

    //proses
    printf("Masukkan 10 data : ");
    for (i=0;i<10;i++) {
        scanf(" %d",&data);
        fprintf(pfile,"%d\n",data);
    }

    fclose(pfile); //tutup

    return 0;
}
