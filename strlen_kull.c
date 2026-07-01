/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: strlen() ve sizeof() Arasindaki Farklar
 * ACIKLAMA: string.h kutuphanesinden gelen strlen() fonksiyonu ile
 * sizeof operatörünün karakter dizileri uzerindeki calisma mantigi.
 */

#include <stdio.h>
#include <string.h> // strlen() fonksiyonunu kullanabilmek icin gerekli

int main() {
    /* -------------------------------------------------------------
     * 1. Ingiliz Alfabesi Tanimlamasi
     * ------------------------------------------------------------- */
    char ingiliz_alfabesi[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    // strlen() sadece gorunen net karakter sayisini verir (26)
    printf("%d", (int)strlen(ingiliz_alfabesi));
    printf("\n...\n");
    
    // sizeof() metnin sonundaki gizli '\0' (null) karakterini de sayar (26 + 1 = 27)
    printf("%d", (int)sizeof(ingiliz_alfabesi));
    printf("\n............\n");

    /* -------------------------------------------------------------
     * 2. Turk Alfabesi Tanimlamasi
     * ------------------------------------------------------------- */
    // NOT: Dosya UTF-8 olarak kaydedildiyse, 'C, G, I, O, S, U' gibi Turkce 
    // karakterler bellekte 2 bayt kaplar. Bu yuzden strlen ve sizeof beklenenden buyuk cikabilir.
    char turk_alfabesi[] = "ABCCDEFGGHIIJKLMNOOPRSSTUUVYZ";
    
    printf("%d", (int)strlen(turk_alfabesi));
    printf("\n...\n");
    
    printf("%d", (int)sizeof(turk_alfabesi));
    printf("\n............\n");

    /* -------------------------------------------------------------
     * 3. Sabit Boyutlu Dizi Tanimlamasi
     * ------------------------------------------------------------- */
    // Dizi boyutu acikca [50] olarak belirtilmistir.
    char deneme[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    // strlen() yine sadece icindeki metnin uzunluguna bakar (26)
    printf("%d", (int)strlen(deneme));
    printf("\n...\n");
    
    // sizeof() icindeki metne bakmaksizin dizinin toplam ayrilmis alanini verir (50)
    printf("%d", (int)sizeof(deneme));
    printf("\n");

    return 0;
}