/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Cember ve Daire Hesaplamalari
 * ACIKLAMA: Kullanicidan alinan yaricap bilgisine gore
 * cemberin capini, cevresini ve dairenin alanini hesaplar.
 */

#include <stdio.h>

int main() 
{
    // Gerekli ondalikli degiskenlerin tanimlanmasi
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
    cevre = 2 * 3.14 * yaricap;
    alan  = 3.14 * (yaricap * yaricap);

    /*
     * Tum sonuclari yazdir
     */
    // %.2f belirteci ile virgulden sonra sadece 2 basamak gosterilir
    printf("Cemberin capi = %.2f birimdir \n", cap);
    printf("Cemberin cevresi = %.2f birimdir \n", cevre);
    printf("Dairenin alani = %.2f birim karedir\n", alan);

    return 0;
}