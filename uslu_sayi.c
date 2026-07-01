/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Uslu Sayi Hesaplama (pow fonksiyonu kullanimi)
 * ACIKLAMA: Kullanicidan alinan taban ve kuvvet degerlerine gore
 * uslu sayi hesaplamasi yapan program.
 */

#include <stdio.h>
#include <math.h> // pow() fonksiyonunu kullanabilmek icin

int main() 
{
    // Cok buyuk ve hassas ondalikli sayilar icin double veri tipi kullaniyoruz
    double taban, kuvvet, sonuc;

    /* * Kullanicidan iki sayi al */
    printf("Taban degerini giriniz: ");
    scanf("%lf", &taban); // double veri tipi icin %lf belirteci kullanilir

    printf("Kuvvet degerini giriniz: ");
    scanf("%lf", &kuvvet);

    /* * taban^kuvvet degerini hesapla */
    // math.h kutuphanesinden gelen pow(x, y) fonksiyonu x uzeri y (x^y) hesaplar
    sonuc = pow(taban, kuvvet);

    // %.2lf ile her bir double degerinin virgulden sonra sadece 2 basamagini yazdiriyoruz
    printf("%.2lf ^ %.2lf = %.2lf\n", taban, kuvvet, sonuc);

    return 0;
}