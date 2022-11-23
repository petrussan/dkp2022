#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    char op;

    x=15;y=15;

    printf("Titik awal robot di x = %d y= %d\n",x,y);

    do {
        printf("Robot mau digerakkan kemana? ");
        scanf(" %c",&op);
        op = toupper(op);
        switch(op) {
            case 'A' : printf("Robot bergerak ke kiri\n");
                       x--;
                       break;
            case 'D' : printf("Robot bergerak ke kanan\n");
                       x++;
                       break;
            case 'W' : printf("Robot bergerak ke atas\n");
                       y--;
                       break;
            case 'S' : printf("Robot bergerak ke bawah\n");
                       y++;
                       break;
            case 'X' :
                       break;
            default  : printf("perintah tidak dikenal");
        }
    } while (op!='X');

    printf("Koordinat terakhir robot : x=%d, y=%d\n",x,y);


//    switch(op) {
//        case '+' : printf("ini operator penjumlahan\n");
//                   break;
//        case '-' : printf("ini operator pengurangan\n");
//                   break;
//        case '*' : printf("ini operator perkalian\n");
//                   break;
//        case '/' : printf("ini operator pembagian\n");
//                   break;
//        default  : printf("tidak dikenal");
//    }
    return 0;
}
