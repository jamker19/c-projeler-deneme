#include <stdio.h>

int main()
{
    int sayi;

    /* Kullanicidan sayi degerini al */
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    // 1. BLOK: Sayinin pozitif olma durumu
    if (sayi > 0)
    {
        printf("Birinci Blok: Girmis oldugunuz sayi pozitiftir\n");
    }

    // 2. BLOK: Sayinin negatif olma durumu
    if (sayi < 0)
    {
        printf("Ikinci Blok: Girmis oldugunuz sayi negatiftir\n");
    }

    // 3. BLOK: Sayinin sifira esit olma durumu
    if (sayi == 0)
    {
        printf("Ucuncu Blok: Girmis oldugunuz sayi sifirdir\n");
    }

    return 0;
}