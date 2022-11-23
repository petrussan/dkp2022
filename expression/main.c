#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    float e,f,g,h;
    char i,j;

    a=10; b=20; c=200;
    e = 2.5; f= 50.0; g = 1.125; h=2.5;
    i = 65; j = 'F';

    //d = (a*b)==c;
    //d = i>j;

    //d=g*a;
    //h=g*a;
    d=(a%2)==0;

    printf("%d",d);
    //printf("%f",h);

    return 0;
}
