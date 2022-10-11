#include <stdio.h>

int main ()
{
    int a, b, c, jwb1, jwb2, jwb3 ;
    a = 4 ;
    b = 8 ;
    c = 3 ;
    printf ("Variabel a bernilai %d\n", a);
    printf ("Variabel b bernilai %d\n", b);
    printf ("Variabel c bernilai %d\n", c);
    if (a == b){jwb1 = 1 ;} else {jwb1 = 0 ;}
    printf ("Apakah a sama dengan b ? jawabannya adalah %d\n", jwb1);
    if (b > c) {jwb2 = 1 ;} else {jwb2 = 0 ;}
    printf ("Apakah b lebih besar dari c ? jawabannya adalah %d\n", jwb2);
    if (a != c) {jwb3 = 1 ;} else {jwb3 = 0 ;}
    printf ("Apakah a tidak sama dengan c ? jawabannya adalah %d", jwb3);
    return 0;
}
