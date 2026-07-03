/* BTK Akademi - C Programlama Dili Kursu */
/**
 * Bir sayinin asal sayi, Armstrong sayisi,
 * mukemmel sayi olup olmadiginin
 * C programlama dilinde fonksiyonlar
 * marifetiyle belirlenmesi
 */
#include <stdio.h>
#include <math.h>

/* Fonksiyon beyanlari (deklarasyonlari) */
int SayiAsalMi(int sayi);
int SayiArmstrongMu(int sayi);
int SayiMukemmelMi(int sayi);

int main()
{
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    
    printf("----------------------------------------\n");

    /* 1. Asal Sayi Kontrolu */
    if(SayiAsalMi(sayi))
    {
        printf("%d sayisi asaldir.\n", sayi);
    }
    else
    {
        printf("%d sayisi asal degildir.\n", sayi);
    }

    /* 2. Armstrong Sayisi Kontrolu */
    if(SayiArmstrongMu(sayi))
    {
        printf("%d bir Armstrong sayisidir.\n", sayi);
    }
    else
    {
        printf("%d bir Armstrong sayisi degildir.\n", sayi);
    }

    /* 3. Mukemmel Sayi Kontrolu */
    if(SayiMukemmelMi(sayi))
    {
        printf("%d bir mukemmel sayidir.\n", sayi);
    }
    else
    {
        printf("%d bir mukemmel sayi degildir.\n", sayi);
    }
    
    printf("----------------------------------------\n");

    return 0;
}

/* --- FONKSIYON TANIMLAMALARI --- */

/**
 * Sayinin asal olup olmadigini kontrol eder (1: Asal, 0: Degil)
 */
int SayiAsalMi(int sayi)
{
    if (sayi <= 1) return 0; 
    if (sayi == 2) return 1;
    if (sayi % 2 == 0) return 0;

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

/**
 * Sayinin Armstrong sayisi olup olmadigini kontrol eder (1: Armstrong, 0: Degil)
 */
int SayiArmstrongMu(int sayi)
{
    int son_basamak, toplam, orijinal_sayi, basamak_sayisi; 
    toplam = 0; 

    if (sayi < 0) return 0;
    if (sayi == 0) return 1;

    orijinal_sayi = sayi; 
    basamak_sayisi = (int) log10(sayi) + 1; 

    while(sayi > 0) 
    {
        son_basamak = sayi % 10; 
        toplam = toplam + round(pow(son_basamak, basamak_sayisi)); 
        sayi = sayi / 10; 
    }

    return (orijinal_sayi == toplam); 
}

/**
 * Sayinin mukemmel sayi olup olmadigini kontrol eder (1: Mukemmel, 0: Degil)
 */
int SayiMukemmelMi(int sayi)
{
    int i, toplam, n;
    toplam = 0;
    n = sayi;
    
    if (n <= 1) return 0;

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            toplam += i; 
        }
    }

    return (toplam == n);
}