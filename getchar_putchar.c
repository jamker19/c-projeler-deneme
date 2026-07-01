/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Karakter Girdi ve Cikti Islemleri (getchar ve putchar)
 * ACIKLAMA: Tek bir karakter değerini almak ve ekrana basmak icin
 * standart girdi/cikti fonksiyonlarinin kullanimi.
 */

#include <stdio.h>

int main() 
{
    char ogrenci_notu;
    
    printf("Ogrenci notunu giriniz: ");

    /* * getchar() komutu ile notu al ve ogrenci_notu degiskeninde sakla */
    // getchar() fonksiyonu klavyeden basılan tek bir karakteri okur.
    ogrenci_notu = getchar();

    /* * putchar() komutu ile notu cikti olarak ver */
    // putchar() fonksiyonu kendisine verilen karakteri ekrana yazdirir.
    putchar(ogrenci_notu);
    
    // Alt satıra geçmek için bir boşluk bırakalım
    putchar('\n'); 

    return 0;
}