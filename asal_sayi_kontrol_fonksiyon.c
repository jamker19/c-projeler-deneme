/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Bir sayının asal sayı olup olmadığının
 * C programlama dilinde fonksiyon
 * marifetiyle belirlenmesi
 */
#include <stdio.h>
#include <math.h>

/* Fonksiyon beyanları (deklarasyonları) */
int SayiAsalMi(int sayi);

int main()
{
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // SayiAsalMi() fonksiyonunu çağır ve sonucu yazdır.
    if (SayiAsalMi(sayi))
    {
        printf("%d sayisi asaldir.\n", sayi);
    }
    else
    {
        printf("%d sayisi asal degildir.\n", sayi);
    }

    return 0;
}

/* Fonksiyon Tanımlaması */
int SayiAsalMi(int sayi)
{
    if (sayi <= 1) 
    {
        return 0; 
    }

    if (sayi == 2)
    {
        return 1;
    }

    if (sayi % 2 == 0)
    {
        return 0;
    }

    int sinir = (int)sqrt(sayi);
    for (int i = 3; i <= sinir; i += 2)
    {
        if (sayi % i == 0)
        {
            return 0;
        }
    }

    return 1;
}