/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Union (Birlik) Bellek Paylasimi ve Ezme Etkisi (Tam Kod)
 * ACIKLAMA: Union elemanlarinin ayni bellek adresini paylasmasinin,
 * her yeni atamada (int, string, float) diger veri tiplerini nasil ezdigini gosteren program.
 */

#include <stdio.h>
#include <string.h>

// Temel union yapisinin tanimlanmasi
union Veri {
    int i;          // 4 bayt
    float f;        // 4 bayt
    char str[20];   // 20 bayt -> En buyuk eleman bu oldugu icin union boyutu 20 bayt olacaktir.
};

int main() {
    union Veri veri;

    /* -------------------------------------------------------------
     * 1. DURUM: Ust Uste Deger Atamalari (En son string atandi)
     * ------------------------------------------------------------- */
    veri.i = 10;
    veri.f = 220.5;
    // En son str'ye atama yapildi! Bu yuzden i ve f elemanlarinin uzerine yazildi.
    strcpy(veri.str, "C Programlama Kursu");

    printf("Verinin buyuklugu : %d\n", (int)sizeof(veri)); 
    printf("veri.i : %d\n", veri.i);                     // Bozuk/Anlamsiz deger basar
    printf("veri.f : %.2f\n", veri.f);                   // Bozuk/Anlamsiz deger basar
    printf("veri.str : %s\n", veri.str);                 // Dogru basar ("C Programlama Kursu")
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 2. DURUM: Tamsayi (int) Atamasi Yapilmasi
     * ------------------------------------------------------------- */
    // En son i'ye atama yapildi! Bu sefer str'nin ilk 4 bayti ezildi.
    veri.i = 103;

    printf("Verinin buyuklugu : %d\n", (int)sizeof(veri)); 
    printf("veri.i : %d\n", veri.i);                     // Dogru basar (103)
    printf("veri.f : %.2f\n", veri.f);                   // Bozuk/Anlamsiz deger basar
    printf("veri.str : %s\n", veri.str);                 // Bozuk basar
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 3. DURUM: Ondalikli Sayi (float) Atamasi Yapilmasi
     * ------------------------------------------------------------- */
    // En son f'ye atama yapildi! Bu sefer i ve str'nin ilk 4 bayti ezildi.
    veri.f = -203.45;

    printf("Verinin buyuklugu : %d\n", (int)sizeof(veri)); // Boyut sabittir (20)
    printf("veri.i : %d\n", veri.i);                     // Bozuk/Anlamsiz deger basar
    printf("veri.f : %.2f\n", veri.f);                   // Dogru basar (-203.45)
    printf("veri.str : %s\n", veri.str);                 // Bozuk basar
    printf("\n...\n");

    return 0;
}