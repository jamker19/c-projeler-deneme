/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde constant'lar
 * yani sabitler
 */

#include <stdio.h>

int main() {
    /* const kelimesi, bu değişkenlerin değerinin bir daha asla 
       değiştirilemeyeceğini bilgisayara kilitler. */
    const int SaattekiDakikaSayisi = 60;
    const float PI = 3.14;

    /* Sabit değerleri ekrana yazdırıyoruz */
    printf("%d\n", SaattekiDakikaSayisi);
    printf("%f\n", PI);

    /* EĞER AŞAĞIDAKİ SATIRIN YORUMUNU KALDIRIRSAK PROGRAM DERLENMEZ, HATA VERİR: */
    // PI = PI + 5; // Çünkü PI bir sabittir, değeri sonradan değiştirilemez!

    return 0;
}