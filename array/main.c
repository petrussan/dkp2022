#include <stdio.h>
#include <stdlib.h>

float ratarata(int n, float x[]);
void modify(int n, float x[]);

int main()
{
    int n, i;
    float avg,dev,sum=0;
    float data[100];

    printf("Mau menghitung rata-rata berapa data? ");
    scanf(" %d",&n);
    for (i=0;i<n;i++) {
        printf("Masukkan data ke %d : ",i+1);
        scanf(" %f",&data[i]);
//        sum += data[i];
    }
//    avg = sum/n;
//    avg = ratarata(n,data);
//    printf("Nilai rata-rata dari data adalah : %f\n",avg);

//    printf("Data simpangan : \n");
//    for(i=0;i<n;i++) {
//        dev = data[i]-avg;
//        printf("i = %d  x=%9.2f dev=%9.2f\n",
//               i+1,data[i],dev);
//    }

    for (i=0;i<n;i++)
        printf("%f\n",data[i]);
    modify(n,data);
    for (i=0;i<n;i++)
        printf("%f\n",data[i]);

    return 0;
}

float ratarata(int n, float x[]) {
    int i;
    float sum=0;

    for (i=0;i<n;i++)
        sum=sum+x[i];

    return sum/n;
}

void modify(int n, float x[]) {
    int i;

    for (i=0;i<n;i++) {
        x[i] = x[i]*10;
        printf(" %f\n",x[i]);
    }



}
