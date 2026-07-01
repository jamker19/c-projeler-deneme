#include <stdio.h>

int main()
{
    // toplam degiskenine cop deger almamasi icin mutlaka ilk deger (0) verilmelidir
    int i, n, toplam = 0;

    /* Kullanicidan ust sinir degerini al */
    printf("Ust sinir degerini giriniz: ");
    scanf("%d", &n);

    /* Tum sayilarin toplamini hesapla */
    for (i = 1; i <= n; i++)
    {
        // Guncel 'i' degerini mevcut toplama ekliyoruz
        toplam += i; 
    }

    printf("Ilk %d adet dogal sayinin toplami = %d\n", n, toplam);

    return 0;
}