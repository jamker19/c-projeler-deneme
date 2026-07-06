#include <stdio.h>
#include <stdlib.h>

#define VERI_BOYUTU 1000

int main()
{
    /* Veri boyutunu depolayan karakter dizisi (Metin kutusu) */
    char veri[VERI_BOYUTU];

    /* Dosya referansını tutacak olan File Pointer (İşaretçi) */
    FILE * fPtr;

    /* Dosyayı "w" (write/yazma) modunda açıyoruz.
       NOT: Eğer bu isimde bir dosya yoksa sıfırdan oluşturulur, 
       varsa içindeki eski veriler tamamen silinir!x
    */
    fPtr = fopen("file1.txt", "w");

    /* Dosya başarıyla açılamadıysa (Klasör yolu yanlışsa veya izin yoksa) */
    if(fPtr == NULL)
    {
        printf("Dosya olusturulamadi veya acilamadi.\n");
        exit(EXIT_FAILURE); // Programı hatayla sonlandır
    }

    /* Kullanıcıdan dosyaya yazılacak metni alıyoruz */
    printf("Dosyaya yazilacak metni girin:\n");
    fgets(veri, VERI_BOYUTU, stdin);

    /* Girilen metni dosyanın içine yazıyoruz */
    fprintf(fPtr, "%s", veri);

    /* Açılan dosyayı kapatıp işletim sistemine kaynağı geri iade ediyoruz (Çok önemli) */
    fclose(fPtr);

    printf("Dosya basariyla olusturuldu ve veri yazildi.\n");

    return 0;
}