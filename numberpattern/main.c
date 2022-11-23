#include <stdio.h>
#include <stdlib.h>

int power(int b, int e);
void solusi1(int n);
void solusi2(int n);


int main()
{
    int i;
    int n;

    printf("Please enter a number (max 5 digit) : ");
    scanf(" %d",&n);

    //solusi1(n);
    solusi2(n);

    return 0;
}

int power(int b, int e) {
    int result=1;

    while(e>0) {
        result *= b;
        --e;
    }

    return result;
}

void solusi1(int n) {
    int i;
    int h,sisa;

    h = n/10000;
    sisa = n%10000;
    for (i=0;i<h;i++) {
        printf("%d",i+1);
    }
    printf("\n");

    h = sisa/1000;
    sisa = sisa%1000;
    for (i=0;i<h;i++) {
        printf("%d",i+1);
    }
    printf("\n");

    h = sisa/100;
    sisa = sisa%100;
    for (i=0;i<h;i++) {
        printf("%d",i+1);
    }
    printf("\n");

    h = sisa/10;
    sisa = sisa%10;
    for (i=0;i<h;i++) {
        printf("%d",i+1);
    }
    printf("\n");

    h = sisa;
    for (i=0;i<h;i++) {
        printf("%d",i+1);
    }
    printf("\n");

}

void solusi2(int n) {
    int i,j,h,sisa;
    sisa = n;

    for (i=4;i>=0;i--) {
        h = sisa/power(10,i);
        sisa = sisa%power(10,i);
        for (j=0;j<h;j++) {
            printf("%d",j+1);
        }
        printf("\n");
    }

}
