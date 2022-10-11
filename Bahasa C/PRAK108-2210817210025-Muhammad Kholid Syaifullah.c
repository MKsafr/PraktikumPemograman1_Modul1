#include <stdio.h>

int main ()
{
    float putaran, jarak, kel, jari ;
    printf ("Diketahui :\n");
    putaran = 5 ;
    jarak = 14 ;
    printf ("Pak Dengklek mengelilingi taman = %.0f putaran\n", putaran);
    printf ("Jarak tempuh Pak Dengklek = %.0f kilometer\n\n", jarak);
    kel = jarak / putaran ;

    printf ("Jawab :\n");
    jari = kel / ((22 / 7) * 2);
    printf ("Jari-jari taman yang dikelilingi Pak Dengklek adalah = %.2f kilometer", jari);
    return 0;
}
