#include <stdio.h>
#include <stdlib.h>

int main()
{   char item[20];
    int partno;
    float cost;
    char line[80];

//    printf("Masukkan data item, partno dan cost:\n");
//    scanf(" %s %d %f",item, &partno, &cost);
//    printf("%s %d %f\n",item, partno, cost);
/*
    printf("Masukkan satu baris tulisan :\n");
    scanf(" %[ ABCDEF]",line);
    printf("%s\n",line);

    fflush(stdin);

    printf("Masukkan satu baris tulisan :\n");
    scanf(" %[^\n]",line);
    printf("%s\n",line);

    printf("Masukkan satu baris tulisan :\n");
    scanf(" %s",line);
    printf("%s\n",line);
*/
/*
    int a,b,c;

    printf("Masukkan 3 angka Integer sepanjang 3 digit: ");
    scanf(" %3d %3d %3d",&a,&b,&c);
    printf(" %d %d %d",a,b,c);
*/

    double x=5000.0, y=0.0025;
    int i = 12345;
    float xx = 346.678;

    printf("%f %f %f %f\n\n",x,y,x*y,x/y);
    printf("%e %e %e %e\n\n",x,y,x*y,x/y);

    printf("%3d %5d %8d\n",i,i,i);
    printf("%3f %10f %13f\n",xx,xx,xx);
    printf("%7f %7.3f %7.1f\n",xx,xx,xx);
    printf("%3e %10e %13e\n",xx,xx,xx);
    printf("%12e %12.5e %12.3e\n",xx,xx,xx);


    return 0;

}
