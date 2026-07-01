/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde bir degiskene
 * farkli sayi sistemlerinde deger atama
 */

#include <stdio.h>

int main() 
{
    /* -------------------------------------------------------------
     * Farklı Sayı Sistemlerinde Tanımlamalar
     * ------------------------------------------------------------- */
    
    // 10'luk sayı düzeninde (Decimal) normal atama
    int a = 35; 
    
    // 2'lik sayı düzeninde (Binary) atama. Başına '0b' getirilir.
    // 0b00100011 sayısı onluk tabanda 35'e eşittir.
    int b = 0b00100011; 
    
    // 16'lık sayı düzeninde (Hexadecimal) atama. Başına '0x' getirilir.
    // 0x23 sayısı onluk tabanda (2 * 16 + 3) yine 35'e eşittir.
    int c = 0x23; 

    /* -------------------------------------------------------------
     * Ekrana Yazdırma İşlemleri
     * ------------------------------------------------------------- */
    // %d belirteci, sayılar hangi tabanda tanımlanırsa tanımlansın 
    // onları ekrana her zaman 10'luk (decimal) sistemde yazdırır.
    printf("a= %d\n", a);
    printf("b= %d\n", b);
    printf("c= %d\n", c);

    return 0;
}