#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100],s2[100],dummy[100];

    printf("Masukkan string 1 : ");
    scanf(" %[^\n]",&s1);
    printf("Masukkan string 2 : ");
    scanf(" %[^\n]",&s2);
    printf("%d",strcmp(s1,s2));

    strcpy(dummy,s1);
    strcpy(s1,s2);
    strcpy(s2,dummy);
    printf("\n%s\n%s",s1,s2);
    return 0;
}
