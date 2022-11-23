#include <stdio.h>
#include <stdlib.h>

char lower_to_upper(char c1);
void display(char a);

int main()
{
    char c,cUPPER;

    printf("Masukkan 1 huruf kecil : ");
    scanf(" %c",&c);
    cUPPER = lower_to_upper(c);
    display(cUPPER);
//    printf("Huruf besar dari %c : %c\n\n",c,cUPPER);
//    printf("Huruf besar dari %c : %c\n\n",c,lower_to_upper(c));
    return 0;
}

char lower_to_upper(char c1) {
    char c2;

    c2 = (c1>='a' && c1<='z')?'A'+c1-'a':c1;

    return c2;
}

void display(char a) {
    printf("\nHuruf Besar : %c",a);
}
