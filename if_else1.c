#include <stdio.h>

int main()
{
    int sayi;

    /* Kullanicidan sayi degerini al */
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    // 1. ADIM: Pozitiflik kontrolü (Eğer sayı 0'dan büyükse burası çalışır ve biter)
    if (sayi > 0)
    {
        printf("Girmis oldugunuz sayi pozitiftir\n");
    }
    // 2. ADIM: Üstteki şart yanlışsa buraya bakılır (Negatiflik kontrolü)
    else if (sayi < 0)
    {
        printf("Girmis oldugunuz sayi negatiftir\n");
    }
    // 3. ADIM: Yukarıdaki şartların hiçbiri tutmadıysa (Yani sayı ne pozitif ne negatifse)
    else
    {
        printf("Girmis oldugunuz sayi sifirdir\n");
    }


    return 0;
}