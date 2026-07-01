/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Dikdortgen Alan ve Cevre Hesaplama
 * ACIKLAMA: Kullanicidan alinan uzunluk (boy) ve genislik (en)
 * degerlerine gore dikdortgenin cevresini ve alanini hesaplar.
 */

#include <stdio.h>

int main() 
{
    float boy, en, cevre, alan;

    /*
     * Uzunluk ve genislik degerlerini kullanicidan al
     */
    printf("Dikdortgenin uzunlugunu giriniz: ");
    scanf("%f", &boy);

    printf("Dikdortgenin genisligini giriniz: ");
    // Orijinal koddaki %d hatasi ondalikli okuma icin %f olarak duzeltilmistir
    scanf("%f", &en); 

    /* * Dikdortgenin cevresini hesapla */
    cevre = 2 * (boy + en);

    /* * Dikdortgenin alanini hesapla */
    alan = boy * en;

    /* * Sonuclari ekrana yazdir */
    printf("\nDikdortgenin Cevresi = %.2f\n", cevre);
    printf("Dikdortgenin Alani   = %.2f\n", alan);

    return 0;
}