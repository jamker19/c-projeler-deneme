#include <stdio.h>

int main()
{
    int i, n;

    printf("Ust sinir degerini giriniz: ");
    scanf("%d", &n);

    // =========================================================================
    // 1. FOR DONGUSU (Kosul Bastan Kontrol Edilir)
    // =========================================================================
    printf("--- For Dongusu Sonucu ---\n");
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    printf("...\n");

    // =========================================================================
    // 2. WHILE DONGUSU (Kosul Bastan Kontrol Edilir - Sayac Disarida Baslar)
    // =========================================================================
    printf("--- While Dongusu Sonucu ---\n");
    i = 1; 
    while (i <= n) 
    {
        printf("%d\n", i);
        i++; 
    }

    printf("...\n");

    // =========================================================================
    // 3. DO-WHILE DONGUSU (Kosul Sonda Kontrol Edilir - En Az 1 Kez Calisir)
    // =========================================================================
    printf("--- Do-While Dongusu Sonucu ---\n");
    i = 1;
    do 
    {
        printf("%d\n", i);
        i++;
    } while (i <= n); // DIKKAT: do-while yapisinin sonundaki bu noktali virgul zorunludur!

    printf("...\n");

    return 0;
}