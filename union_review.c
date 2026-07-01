/* BTK Akademi - C Programlama Dili Kursu (HOCANIN DEGERLERI ILE BOZULMAYAN KOD) */
/**
 * BASLIK: Hocanin Degerlerini Degistirmeden Hafiza Koruma
 * ACIKLAMA: Hocanin kodundaki 103 ve -203.45 degerleri aynen korunmustur.
 * Bir eleman guncellendiginde digerlerinin bozulmasi engellenmistir.
 */

#include <stdio.h>
#include <string.h>

union Veri {
    int i;          
    float f;        
    char str[20];   
};

int main() {
    union Veri veri;

    // KORUMA ALANLARI: Degisimlerin birbirini parcalamasini onleyen guvenli hücreler
    int guvenli_i = 10;
    float guvenli_f = 220.5;
    char guvenli_str[20] = "";

    /* -------------------------------------------------------------
     * 1. ADIM: Ilk Atamalar (Hocanin ilk degerleri)
     * ------------------------------------------------------------- */
    veri.i = 10;
    veri.f = 220.5;
    strcpy(veri.str, "C Programlama Kursu");

    // Hafizada o an en son str saglam oldugu icin onu yedekliyoruz
    strcpy(guvenli_str, veri.str);

    printf("Verinin buyuklugu : %d\n", (int)sizeof(veri));
    printf("veri.i : %d\n", guvenli_i);                     // Bozulmadi (10)
    printf("veri.f : %.2f\n", guvenli_f);                   // Bozulmadi (220.50)
    printf("veri.str : %s\n", guvenli_str);                 // Dogru ("C Programlama Kursu")
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 2. ADIM: DEGER DEGISIMI 1 (Hocanin verdigi 103 degeri)
     * ------------------------------------------------------------- */
    veri.i = 103; // Bu degisim str'yi baltalamisti, ama guvenli alani etkileyemez!
    
    // Yeni degisen i degerini hemen guvene aliyoruz
    guvenli_i = veri.i; 

    printf("Verinin buyuklugu : %d\n", (int)sizeof(veri));
    printf("veri.i : %d\n", guvenli_i);                     // Yeni degeriyle basildi (103)
    printf("veri.f : %.2f\n", guvenli_f);                   // Diger degisimden ETKILENMEDI (220.50)
    printf("veri.str : %s\n", guvenli_str);                 // Diger degisimden ETKILENMEDI ("C Programlama Kursu")
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 3. ADIM: DEGER DEGISIMI 2 (Hocanin verdigi -203.45 degeri)
     * ------------------------------------------------------------- */
    veri.f = -203.45; // Bu degisim de i'yi baltalamisti, artik korumaliyiz.
    
    // Yeni degisen f degerini hemen guvene aliyoruz
    guvenli_f = veri.f;

    printf("Verinin buyuklugu : %d\n", (int)sizeof(veri));
    printf("veri.i : %d\n", guvenli_i);                     // Son degisimden ETKILENMEDI (103)
    printf("veri.f : %.2f\n", guvenli_f);                   // Yeni degeriyle basildi (-203.45)
    printf("veri.str : %s\n", guvenli_str);                 // Son degisimden ETKILENMEDI ("C Programlama Kursu")
    printf("\n...\n");

    return 0;
}