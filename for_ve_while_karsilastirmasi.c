#include <stdio.h>

int main()
{
    int i, n;

    printf("Ust sinir degerini giriniz: ");
    scanf("%d", &n);

    // ==========================================
    // 1. YONTEM: FOR DONGUSU ILE YAZIM
    // ==========================================
    printf("--- For Dongusu Sonucu ---\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    printf("...\n");

    // ==========================================
    // 2. YONTEM: WHILE DONGUSU ILE YAZIM
    // ==========================================
    printf("--- While Dongusu Sonucu ---\n");
    
    i = 1; // 1. Adim: Baslangic degeri dongunun disinda verilir
    while (i <= n) // 2. Adim: Sadece dongunun sarti parantez icine yazilir
    {
        printf("%d\n", i);
        i++; // 3. Adim: Sayac artisi dongunun icinde el ile yapilir (Unutulursa sonsuz dongu!)
    }

    printf("...\n");

    return 0;
}