/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde hata yakalama
 * ve programdan çıkış
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int bolunen = 20;
    int bolen = 0;
    int bolum;

    /* Bölünen sayı 0 mı kontrolü */
    if (bolen == 0) {
        fprintf(stderr, "Sifira Bolme Hatasi! Programdan Cikiliyor...\n");
        exit(-1); // // exit(EXIT_FAILURE); -> Programı hatayla kapat
    }

    /* Eğer bolen 0 değilse bölme işlemini yap */
    bolum = bolunen / bolen;
    fprintf(stderr, "Bolum (Sonuc) : %d\n", bolum);

    exit(0); // // exit(EXIT_SUCCESS); -> Programı başarıyla kapat
}