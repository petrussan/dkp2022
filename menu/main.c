#include <stdio.h>
#include <stdlib.h>

float luassegitiga(float a, float t);
float luaspersegi(float p, float l);
float luasbujursangkar(float s);
float luaslingkaran(float r);

int main()
{
    char o;
    int i;
    int n;
    float result,total;
    float a,t;

    printf("Menu:\n");
    printf("     1. Menghitung Luas Segitiga\n");
    printf("     2. Menghitung Luas Bujur Sangkar\n");
    printf("     3. Menghitung Luas Persegi Panjang\n");
    printf("     4. Menghitung Luas Lingkaran\n");
    printf(" Pilihan : ");
    scanf(" %c",&o);
    switch(o) {
       case '1' :   printf("Masukkan jumlah data : ");
                scanf(" %d",&n);
                for (i=0;i<n;i++) {
                    printf("Menghitung Luas segitiga ke %d\n",i+1);
                    printf("Masukkan alas : ");
                    scanf(" %f",&a);
                    printf("Masukkan tinggi : ");
                    scanf(" %f",&t);
                    result = luassegitiga(a,t);
                    total += result;
                    printf(" Luas Segitiga ke %d : %f cm2\n",i+1,result);
                }
                printf("Rata rata luas segitiga : %f",total/n);
                break;
        case '2' :
                break;
        case '3' :
                break;
        case '4' :
                break;
    }
    return 0;
}

float luassegitiga(float a, float t){
    float result;
    result = 0.5*a*t;
    return result;
}

float luaspersegi(float p, float l){
    float result;
    result = p*l;
    return result;
}

float luasbujursangkar(float s){
    float result;
    result = s*s;
    return result;
}

float luaslingkaran(float r){
    float result;
    result = 3.14*r*r;
    return result;
}

