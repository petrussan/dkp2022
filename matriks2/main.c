#include <stdio.h>
#include <stdlib.h>

void readmatrix(int m, int n, int x[][50]);
void dispmatrix(int m, int n, int x[][50]);
void addmatrix(int x1[][50],int x2[][50]);
void mulmatrix(int x1[][50],int x2[][50]);
int m1,n1;
int m2,n2;

int main()
{
    int i,j;
    int data1[50][50];
    int data2[50][50];

    printf("Masukkan ukuran matriks (m x n):  ");
    scanf("%d x %d",&m1,&n1);
    printf("Masukkan data untuk matriks 1 :\n");
    readmatrix(m1,n1,data1);
    printf("Masukkan ukuran matriks (m x n):  ");
    scanf("%d x %d",&m2,&n2);
    printf("Masukkan data untuk matriks 2 :\n");
    readmatrix(m2,n2,data2);
    printf("Matriks 1 : \n");
    dispmatrix(m1,n1,data1);
    printf("Matriks 2 : \n");
    dispmatrix(m2,n2,data2);
    printf("Hasil penjumlahan matriks :\n");
    addmatrix(data1,data2);
    printf("Hasil perkalian matriks :\n");
    mulmatrix(data1,data2);

    return 0;
}

void readmatrix(int m, int n, int x[][50]) {
    int i,j;

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++) {
            printf("Masukkan data %d,%d: ",i+1,j+1);
            scanf(" %d",&x[i][j]);
        }
    }
}

void dispmatrix(int m, int n, int x[][50]) {
    int i,j;

    for (i=0;i<m;i++) {
        for (j=0;j<n;j++)
            printf(" %3d",x[i][j]);
        printf("\n");
    }
}

void addmatrix(int x1[][50],int x2[][50]) {
    int result[50][50];
    int i,j;

    if ((m1!=m2) && (n1!=n2)) {
        printf("Tidak bisa dijumlahkan\n");
        return;
    }
    for (i=0;i<m1;i++)
    for(j=0;j<n1;j++) {
        result[i][j]=x1[i][j]+x2[i][j];
    }
    dispmatrix(m1,n1,result);
}

void mulmatrix(int x1[][50], int x2[][50]) {
   int i,j,k; //row, column, inner
   int result[50][50];

   if (n1!=m2) {
      printf("Tidak bisa dikalikan\n");
      return;
   } else {
        for (i=0;i<m1;i++)
            for(j=0;j<n2;j++){
                result[i][j]=0;
                for (k=0;k<n1;k++) {
                    result[i][j]+=x1[i][k]*x2[k][j];
                }
            }
   }
   dispmatrix(m1,n2,result);
}
