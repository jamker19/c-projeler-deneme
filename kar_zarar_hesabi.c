#include <stdio.h>

int main()
{
    // 1. ADIM: Gerekli tamsayi degiskenlerini tanimliyoruz
    int maliyet, satis_bedeli, kar_zarar;

    // Kullanicidan maliyet ve satis bedeli bilgilerini aliyoruz
    printf("Maliyet bedelini giriniz: ");
    scanf("%d", &maliyet);

    printf("Satis bedelini giriniz: ");
    scanf("%d", &satis_bedeli);

    // 2. ADIM: Kosullarla kar, zarar veya basabaş durumlarini kontrol ediyoruz

    // Satis bedeli maliyetten buyukse KAR edilmistir
    if (satis_bedeli > maliyet)
    {
        /* Bu durumda kar edilmistir. Kari hesapla */
        kar_zarar = satis_bedeli - maliyet;
        printf("Kar = %d\n", kar_zarar);
    }
    // Maliyet satis bedelinden buyukse ZARAR edilmistir
    else if (maliyet > satis_bedeli)
    {
        /* Bu durumda zarar edilmistir. Zarari hesapla */
        kar_zarar = maliyet - satis_bedeli;
        printf("Zarar = %d\n", kar_zarar);
    }
    // Iki durum da degilse satis ve maliyet esittir, kar veya zarar yoktur
    else
    {
        /* Kar veya zarar edilmemistir. */
        printf("Kar veya zarar edilmemistir.\n");
    }

    return 0;
}