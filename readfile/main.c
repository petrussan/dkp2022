#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data,i;

    FILE *pfile;  //establish buffer area

    pfile = fopen("data.txt","r"); //inisialisasi
    if (pfile==NULL)
        printf("ERROR - file tidak bisa dibaca\n");

    //proses
    for (i=0;i<10;i++) {
        fscanf(pfile,"%d",&data);
        printf("%d ",data);
    }

    fclose(pfile); //tutup

    return 0;
}
