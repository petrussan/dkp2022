#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    char letter[80];
    int count,n;

/*
    c = getchar();  //--> ini untuk baca 1 karakter
    putchar(c);

    letter[0] = getchar();
    letter[1] = getchar();
    letter[2] = getchar();
    putchar(letter[0]);
    putchar(letter[1]);
    putchar(letter[2]);
*/
/*
    for(count=0;count<80;count++) {
        letter[count]=getchar();
        if (letter[count]=='\n')
            count=80;
    }
*/

    for (count=0;(letter[count]=getchar())!='\n';count++);  //count++ --> count=count+1
    n=count;
    for(count=0;count<n;count++)
        putchar(toupper(letter[count]));   // atau letter[count]-31


    return 0;
}
