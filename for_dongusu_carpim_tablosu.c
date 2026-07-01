#include <stdio.h>

int main()
{
    int i, sayi;

    /* Carpim tablosu olusturulacak olan sayiyi kullanicidan al */
    printf("Carpim tablosu olusturulacak olan sayiyi giriniz: ");
    scanf("%d", &sayi);

    /* Sabit olarak 1'den 10'a kadar donen bir dongu kuruyoruz */
    for (i = 1; i <= 10; i++)
    {
        /* * DINAMIK PRINTF MANTIGI:
         * Sirasiyla giren sayi, sayac (i) ve ikisinin carpimini ekrana basiyoruz.
         * Bellekte fazladan yer tutmamak icin islemi dogrudan parametre icinde (sayi * i) yaptik.
         */
        printf("%d * %d = %d\n", sayi, i, (sayi * i));
    }

    return 0;
}