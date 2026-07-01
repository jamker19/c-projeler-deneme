/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: C Programlama Dilinde Ozel (Kacis) Karakterler (Tam Kod)
 * ACIKLAMA: Metinler icerisinde satir basina gecme (\n), tab kadar bosluk birakma (\t),
 * null karakteri (\0), cift tirnak (\"), tek tirnak (\') ve ters taksim (\\) gösterimi.
 */

#include <stdio.h>

int main() {
    /* -------------------------------------------------------------
     * 1. Yeni Satır Karakteri (\n - Newline)
     * ------------------------------------------------------------- */
    // \n goruldugu yerde imlec bir alt satirin basina gecer.
    char metin1[] = "Merhaba\nDunya!";
    printf("%s", metin1);
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 2. Tab Karakteri (\t - Tab)
     * ------------------------------------------------------------- */
    // \t goruldugu yerde bir tab boslugu (genellikle 4 veya 8 karakter) birakir.
    char metin2[] = "Merhaba\tDunya!";
    printf("%s", metin2);
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 3. Null (Bitiş) Karakteri (\0 - Null Terminator)
     * ------------------------------------------------------------- */
    // \0 karakteri stringin bittigini derleyiciye bildirir. 
    // Ekrana basilirken \0'dan sonrasi okunmaz.
    char metin3[] = {'M', 'e', 'r', 'h', 'a', 'b', 'a', '\0'};
    printf("%s", metin3);
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 4. Çift Tırnak Karakteri (\" - Double Quote)
     * ------------------------------------------------------------- */
    // Metinsel ifadelerin sinirlari cift tirnakla belirlendigi icin,
    // metnin icinde bizzat cift tirnak yazdirmak istersek onune \ getiririz.
    char metin4[] = "Ogretmen iceri girince \"Gunaydin\" diye seslendi.";
    printf("%s", metin4);
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 5. Tek Tırnak Karakteri (\' - Single Quote)
     * ------------------------------------------------------------- */
    // Karakter sabitleri (' ') ile karismamasi icin standart olarak \' seklinde yazilir.
    char metin5[] = "Ahmet\'in telefonu hic susmuyordu.";
    printf("%s", metin5);
    printf("\n...\n");

    /* -------------------------------------------------------------
     * 6. Ters Taksim / Backslash Karakteri (\\ - Backslash)
     * ------------------------------------------------------------- */
    // \ isareti C dilinde kacis karakteri baslattigi icin (ornek: \n, \t),
    // metnin icinde siradan bir \ yazdirmak istiyorsak yan yana iki adet (\\) yazariz.
    char metin6[] = "\\ karakteri ters taksim veya backslash olarak anilir.";
    printf("%s", metin6);
    printf("\n...\n");

    return 0;
}