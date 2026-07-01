/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Karekok Hesaplama (sqrt fonksiyonu kullanimi)
 * ACIKLAMA: Kullanicidan alinan sayinin 
 * karekokunu hesaplayan program.
 */

#include <stdio.h>
#include <math.h> // sqrt() fonksiyonunu kullanabilmek icin

int main() 
{
    // Ondalikli hassas islemler icin double veri tipi kullaniliyor
    double sayi, karekok;

    /* * Kullanicidan sayi degeri al */
    printf("Karekoku hesaplanacak sayiyi giriniz : ");
    scanf("%lf", &sayi); // double veri tipi girdi alirken %lf kullanilir

    /* * Sayinin karekokunu hesapla */
    // math.h kutuphanesinden gelen sqrt() fonksiyonu sayinin karekokunu alir
    karekok = sqrt(sayi);

    /* * Sonucu yazdır */
    // %.2lf ile virgulden sonra sadece 2 basamak gosterilmesini sagliyoruz
    printf("%.2lf sayisinin karekoku = %.2lf\n", sayi, karekok);

    return 0;
}