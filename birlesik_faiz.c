/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Basit ve Bileşik Faiz Hesaplama
 * ACIKLAMA: Kullanicidan alinan ana para, zaman ve faiz orani
 * degerlerine gore hem basit hem de bilesik faiz miktarlarini hesaplar.
 */

#include <stdio.h>
#include <math.h> // Bilesik faizdeki uslu sayi (pow) hesabi icin gerekli

int main() 
{
    float ana_para, zaman, faiz_orani, basit_faiz_miktari, bilesik_faiz_miktari;

    /* * Girdileri al */
    printf("Ana para miktarini giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamani giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranini giriniz: ");
    scanf("%f", &faiz_orani);

    /* * 1. Basit Faiz Hesabi */
    basit_faiz_miktari = (ana_para * zaman * faiz_orani) / 100.0;

    /* * 2. Bilesik Faiz Hesabi */
    // Formul: Toplam Para = Ana Para * (1 + faiz_orani/100)^zaman
    // Faiz Miktari = Toplam Para - Ana Para
    bilesik_faiz_miktari = ana_para * pow((1 + faiz_orani / 100.0), zaman) - ana_para;

    /* * Sonuclari ekrana yazdir */
    printf("\nBasit Faiz Miktari   = %.2f\n", basit_faiz_miktari);
    printf("Bilesik Faiz Miktari = %.2f\n", bilesik_faiz_miktari);

    return 0;
}