#include <stdio.h>

int main ()
{
    int pnjng1, pnjng2, pnjng3, kel, harga, biaya ;
    printf ("Diketahui :\n");
    pnjng1 = 4 ;
    pnjng2 = 5 ;
    pnjng3 = 7 ;
    printf ("Panjang sisi segitiga berturut-turut adalah %d, %d, dan, %d", pnjng1, pnjng2, pnjng3);
    kel = pnjng1 + pnjng2 + pnjng3 ;
    printf ("\nKeliling Tanah Pak Dengklek adalah %d", kel);
    harga = 85000 ;
    printf ("\nHarga tanah Per Meter adalah %d", harga);
    printf ("\nJawab :");
    biaya = kel * harga ;
    printf ("\nBiaya yang diperlukan Pak Dengklek adalah : Rp %d", biaya);
    return 0;
}

