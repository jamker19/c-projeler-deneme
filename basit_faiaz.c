/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Basit Faiz Hesaplama
 * ACIKLAMA: Kullanicidan alinan ana para, zaman ve faiz orani
 * degerlerine gore basit faiz miktarini hesaplayan program.
 */

#include <stdio.h>

int main() 
{
    // Ondalikli faiz hesaplama degiskenlerinin tanimlanmasi
    float ana_para, zaman, faiz_orani, faiz_miktari;

    /* * Girdileri al */
    printf("Ana para miktarini giriniz: ");
    scanf("%f", &ana_para);

    printf("Zamani giriniz: ");
    scanf("%f", &zaman);

    printf("Faiz oranini giriniz: ");
    scanf("%f", &faiz_orani);

    /* * Basit faiz hesabi ile faiz miktarini hesapla */
    // Basit faiz formulu: (Ana Para * Zaman * Faiz Orani) / 100
    faiz_miktari = (ana_para * zaman * faiz_orani) / 100.0;

    /* * Sonucu ekrana yazdir */
    printf("Hesaplanan Faiz Miktari = %.2f\n", faiz_miktari);

    return 0;
}