/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Temel Girdi-Cikti ve Toplama Islemi
 * ACIKLAMA: scanf() ve printf() fonksiyonlari kullanilarak
 * kullanicidan alinan iki tam sayinin toplanmasi.
 */

#include <stdio.h>

int main() 
{
    int sayi1, sayi2, toplam;

    /* * Kullaniciya mesaj yaz */
    printf("Iki sayi giriniz: ");

    /* * Iki degeri kullanicidan al */
    // %d%d ardisik iki tam sayi girdisi bekler
    scanf("%d%d", &sayi1, &sayi2);

    /* * Sayilari topla */
    toplam = sayi1 + sayi2;

    /* * Sonucu ekrana yazdir */
    printf("Toplam = %d\n", toplam);
    
    return 0;
}