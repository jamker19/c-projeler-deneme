/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Uzunluk Birimleri Donusumu (cm -> metre ve km)
 * ACIKLAMA: Kullanicidan santimetre cinsinden alinan uzunluk degerini
 * metre ve kilometre birimlerine donusturen program.
 */

#include <stdio.h>

int main() 
{
    // Ondalikli uzunluk degiskenlerinin tanimlanmasi
    float cm, metre, km;

    /* * Uzunlugu santimetre cinsinden al 
     */
    printf("Uzunlugu santimetre cinsinden giriniz: ");
    scanf("%f", &cm);

    /* * Cevrim islemlerini gerceklestir 
     */
    // 1 metre = 100 cm oldugu icin cm degeri 100'e bolunur.
    metre = cm / 100.0;
    
    // 1 kilometre = 100.000 cm oldugu icin cm degeri 100.000'e bolunur.
    km = cm / 100000.0;

    /* * Sonuclari ekrana yazdir 
     */
    // %.2f belirteci, virgulden sonra sadece 2 basamak gosterilmesini saglar.
    printf("Metre cinsinden uzunluk = %.2f m \n", metre);
    printf("Kilometre cinsinden uzunluk = %.2f km\n", km);

    return 0;
}