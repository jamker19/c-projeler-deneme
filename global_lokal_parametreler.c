/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde global ve lokal
 * değişkenler; fonksiyon parametreleri
 */

#include <stdio.h>

/* global değişken beyanı (deklarasyonu) */
int a = 20; //g_a yaptmakta fayda var

/* Verilen iki sayıyı toplayan fonksiyon */
int BaziIslemlerGerceklestir(int a, int b) { //girdi_1 girdi_2 diye yazarım değişkenler karışmasın
    

    printf("a degiskeninin BaziIslemlerGerceklestir() fonksiyonu icindeki giris degeri = %d\n", a);
    printf("b degiskeninin BaziIslemlerGerceklestir() fonksiyonu icindeki giris degeri = %d\n", b);

    a *= 12;
    b += 5;

    printf("a degiskeninin BaziIslemlerGerceklestir() fonksiyonu icindeki sonraki degeri = %d\n", a);
    printf("b degiskeninin BaziIslemlerGerceklestir() fonksiyonu icindeki sonraki degeri = %d\n", b);

    return a + b;
}

int main () {

    /* Lokal değişken beyanı (deklarasyonu) */
    int a = 10;
    int b = 20;
    int c = 0;

    printf("a degiskeninin main() icerisindeki degeri = %d\n", a);
    printf("b degiskeninin main() icerisindeki degeri = %d\n", b);

    c = BaziIslemlerGerceklestir(a, b);

    printf("c degiskeninin main() icerisindeki degeri = %d\n", c);

    printf("a degiskeninin main() icerisindeki degeri = %d\n", a);
    printf("b degiskeninin main() icerisindeki degeri = %d\n", b);

    return 0;
}