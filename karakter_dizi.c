/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Karakter ve String (Metin) Tanimlama
 * ACIKLAMA: C programlama dilinde tek bir karakter ile 
 * karakter dizilerinin (string) tanimlanmasi ve ekrana basilmasi.
 */

#include <stdio.h>

int main() {
    /* -------------------------------------------------------------
     * 1. Tek Bir Karakter Tanimlama (char)
     * ------------------------------------------------------------- */
    // Tek bir karakter tanimlarken tek tirnak (' ') kullanilir.
    char karakter = 'k';
    
    // Karakterleri yazdirmak icin %c format belirteci kullanilir.
    printf("%c\n", karakter);

    /* -------------------------------------------------------------
     * 2. Karakter Dizisi Tanimlama (String / Metin)
     * ------------------------------------------------------------- */
    // C dilinde stringler aslinda char tipinde birer dizidir ([]).
    // Metinleri tanimlarken cift tirnak (" ") kullanilir.
    char karsilama_mesaji[] = "Merhaba Dunya!";
    
    // Karakter dizilerini yazdirmak icin %s format belirteci kullanilir.
    printf("%s\n", karsilama_mesaji);

    return 0;
}