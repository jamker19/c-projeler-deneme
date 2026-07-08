/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Global ve Lokal Değişkenler
 * Varsayılan İlk Değerler:
 * int -> 0
 * char -> '\0'
 * float -> 0
 * double -> 0
 * pointer -> NULL
 */

#include <stdio.h>
#include <stdlib.h>

/* global değişken beyanı (deklarasyonu) */
int g;

int main () {

    /* Lokal değişkenlerin beyanı (deklarasyonu) */
    int a, b;
    /*
    Lokal değişkenler, eğer programcı tarafından belirtilmezse
    derleyici tarafından otomatik olarak ilklendirilMEZ.
    Bilgisayar belleğinde kalan garip/tuhaf değerleri almamaları
    için programcılar tarafından ilklendirilmelerinde fayda bulunmaktadır.
    */

    /* ilklendirme */
    a = 10;
    b = 20;
    g = a + b;

    printf ("a = %d, b = %d ve g = %d\n", a, b, g);

    return 0;
}