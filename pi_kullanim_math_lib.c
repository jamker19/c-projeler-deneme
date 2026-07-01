/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: M_PI Sabiti ile Cember ve Daire Hesaplamalari
 * ACIKLAMA: math.h kutuphanesindeki hazir pi sayisi sabiti (M_PI) 
 * kullanilarak dinamik cap, cevre ve alan hesabi yapan program.
 */

#define _USE_MATH_DEFINES // M_PI sabitini aktif etmek icin en basa yazilmalidir
#include <stdio.h>
#include <math.h>         // M_PI makrosunu kullanabilmek icin gerekli kutuphane

int main() 
{
    float yaricap, cap, cevre, alan;

    /*
     * Kullanicidan yaricap bilgisini al
     */
    printf("Cemberin/Dairenin yaricapini giriniz: ");
    scanf("%f", &yaricap);

    /*
     * Cap, cevre ve alan degerlerini hesapla
     */
    cap   = 2 * yaricap;
    cevre = 2 * M_PI * yaricap;
    alan  = M_PI * (yaricap * yaricap);

    /*
     * Tum sonuclari yazdir
     */
    // %.2f belirteci ile virgulden sonra sadece 2 basamak gosterilir
    printf("Cemberin capi = %.2f birimdir \n", cap);
    printf("Cemberin cevresi = %.2f birimdir \n", cevre);
    printf("Dairenin alani = %.2f birim karedir\n", alan);

    return 0;
}