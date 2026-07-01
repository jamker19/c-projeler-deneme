#include <stdio.h>

int main()
{
    /* Degisken beyanlari (deklarasyonlari) */

    char karakter = 'C';
    int tamsayi = 1;
    float gercel_sayi = 10.4f;
    long long buyuk_tamsayi = 98989898911;

    /* Ampersand (and per se and) olarak da anilan & isareti ile herhangi bir
     * degiskenin bellekteki adresi alinabilir
     */

    /* Print variable value with their memory address */
    printf("karakter degiskeninin degeri= %c, karakter degiskeninin adresi = %u\n", karakter, &karakter);
    printf("tamsayi degiskeninin degeri= %d, tamsayi degiskeninin adresi = %u\n", tamsayi, &tamsayi);
    printf("gercel_sayi degiskeninin degeri= %f, gercel_sayi degiskeninin adresi = %u\n", gercel_sayi, &gercel_sayi);
    printf("buyuk_tamsayi degiskeninin degeri= %lld, buyuk_tamsayi degiskeninin adresi= %u", buyuk_tamsayi, &buyuk_tamsayi);

    return 0;
}