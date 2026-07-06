#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Dosya referansını tutacak olan File Pointer (İşaretçi) */
    FILE * fPtr;

    /* Dosyadan okunacak her bir harfi tek tek tutacak değişken */
    char karakter;

    /* Dosyayı "r" (read/okuma) modunda açıyoruz */
    fPtr = fopen("dosya1.txt", "r");

    /* fopen(), eğer başarısız ise NULL döner */
    if(fPtr == NULL)
    {
        printf("Dosya okunamadi.\n");
        printf("Dosyanin ilgili konumda olup olmadigini ve de erisim yetkiniz olup olmadigini kontrol edin.\n");
        exit(EXIT_FAILURE);
    }

    /* Dosya başarıyla açıldı mesajı */
    printf("Dosya basariyla acildi; icerigi okunuyor.\n\n");

    /* Dosyayı karakter karakter okuyan döngü */
    do 
    {
        /* Dosyadan bir karakter oku */
        karakter = fgetc(fPtr);

        /* Okunan karakteri ekrana yazdır */
        putchar(karakter);

    } while(karakter != EOF); /* EOF (End Of File) yani dosya bitene kadar dön */

    /* Açılan dosyayı kapatıyoruz */
    fclose(fPtr);

    return 0;
}