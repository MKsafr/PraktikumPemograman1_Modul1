#include <stdio.h>

int main ()
{
    int a, b, hasil1, hasil2 ;
    a = 400000 ;
    b = 350000 ;
    printf ("Harga sepatu A adalah %d\n", a);
    printf ("Harga sepatu B adalah %d\n", b);
    hasil1 = a - (0.13 * a);
    hasil2 = b - (0.21 * b);
    printf ("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", hasil1);
    printf ("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d", hasil2);
    return 0;
}
