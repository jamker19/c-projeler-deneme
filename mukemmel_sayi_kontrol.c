#include <stdio.h>

/* Fonksiyon beyanlari (deklarasyonlari) */
int SayiMukemmelMi(int sayi);

int main()
{
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    // SayiMukemmelMi() fonksiyonunu cagir ve sonucu yazdir.
    if(SayiMukemmelMi(sayi))
    {
        printf("%d bir mukemmel sayidir.\n", sayi);
    }
    else
    {
        printf("%d bir mukemmel sayi degildir.\n", sayi);
    }

    return 0;
}

/**
 * Bir sayinin mukemmel sayi olup olmadigini kontrol eden fonksiyon
 * Sayi mukemmelse 1, degilse 0 sonucunu dondurur.
 */
int SayiMukemmelMi(int sayi)
{
    /* Kendisi haric, pozitif tam bolenlerinin toplami
       kendisine esit olan bir sayi, mukemmel sayi olarak anilir.
    */
    /* Ornek 1: 6 sayisinin kendisi haric bolenleri: 1,2,3
       1 + 2 + 3 = 6 oldugundan, 6 mukemmel sayidir.
       
       Ornek 2: 28 sayisinin kendisi haric bolenleri: 1,2,4,7,14
       1 + 2 + 4 + 7 + 14 = 28 oldugundan, 28 mukemmel sayidir.
    */
    
    int i, toplam, n;
    toplam = 0;
    n = sayi;
    
    // Mükemmel sayilar pozitif tam sayilardir. 1 ve alti mukemmel olamaz.
    if (n <= 1) 
    {
        return 0;
    }

    /* 
     * EKSIK KALAN ALGORITMA KISMI:
     * Bir sayinin, kendisinin yarisi (n/2) degerinden daha buyuk bir tam boleni olamaz.
     * Bu yuzden donguyu n'e kadar degil, n/2'ye kadar calistirmak kodu 2 kat hizlandirir.
     */
    for (i = 1; i <= n / 2; i++)
    {
        // Eger n sayisi, i degerine tam bolunuyorsa (kalan 0 ise)
        if (n % i == 0)
        {
            toplam += i; // Bu boleni toplama ekle
        }
    }

    // Bulunan carpanlarin toplami, en bastaki sayiya esit mi?
    // Esitse 1 (True), degilse 0 (False) dondurur.
    return (toplam == n);
}