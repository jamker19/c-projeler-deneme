/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde aynı isimli global ve lokal
 * değişkenler
 */

#include <stdio.h>

/* global değişken beyanı (deklarasyonu) */
int g = 20;

int main () {

    /* İlk printf: Henüz içeride g tanımlanmadığı için 
       bilgisayar mecburen dışarıdaki global g'yi (20) okur. */
    printf ("g = %d\n", g);

    /* lokal değişken beyanı (deklarasyonu) */
    int g = 10;

    /* İkinci printf: Artık main'in kendi içinde bir g (10) var.
       Yerel olan değişken, küresel olanı gölgeler! */
    printf ("g = %d\n", g);

    return 0;
}