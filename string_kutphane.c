/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: String Kopyalama ve Karsilastirma (strcpy ve strcmp)
 * ACIKLAMA: string.h kutuphanesinden gelen strcpy() ile metin kopyalama,
 * strcmp() ile iki metnin alfabetik/sayisal karsilastirilmasi.
 */

#include <stdio.h>
#include <string.h>

int main() {
    // Önceki görseldeki başlangıç tanımlamaları (Türkçe karakterler temizlendi)
    char metin1[20] = "Merhaba ";
    char metin2[] = "Dunya!";
    char metin3[20];

    // Önceki görseldeki birleştirme adımı: metin1 artık "Merhaba Dunya!" olur
    strcat(metin1, metin2);

    /* -------------------------------------------------------------
     * 1. String Kopyalama (strcpy)
     * ------------------------------------------------------------- */
    // metin1 icerigini metin3'e kopyala
    strcpy(metin3, metin1);

    // metin3'u yazdir
    printf("%s", metin3);
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 2. String Karsilastirma (strcmp)
     * ------------------------------------------------------------- */
    // Compare metin1 ve metin3 karsilastir ve sonucu yazdir
    /* Mevcut durumda:
     * metin1 = "Merhaba Dunya!"
     * metin2 = "Dunya!"
     * metin3 = "Merhaba Dunya!"
     */
    
    // İki metin tamamen aynıysa strcmp 0 döndürür.
    printf("%d\n", strcmp(metin1, metin3)); // 0 dondurecek (esit olduklari icin)
    printf("\n...\n");

    // Metinler eşit değilse, karakterlerin ASCII farkına göre pozitif veya negatif değer döner.
    printf("%d\n", strcmp(metin1, metin2)); // Pozitif deger dondurecek (esit olmadiklari icin)
    printf("\n...\n");

    printf("%d\n", strcmp(metin2, metin1)); // Negatif deger dondurecek (esit olmadiklari icin)
    printf("\n...\n");

    return 0;
}