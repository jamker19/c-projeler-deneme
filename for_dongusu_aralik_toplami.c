#include <stdio.h>

int main()
{
    // i: sayac, alt_sinir: dongunun baslayacagi yer, ust_sinir: dongunun bitecegi yer
    int i, alt_sinir, ust_sinir, toplam = 0;

    /* Kullanicidan alt sinir degerini al */
    printf("Alt sinir degerini giriniz: ");
    scanf("%d", &alt_sinir);

    /* Kullanicidan ust sinir degerini al */
    printf("Ust sinir degerini giriniz: ");
    scanf("%d", &ust_sinir);

    /* Tum sayilarin toplamini hesapla */
    // Dongu sabit 1 yerine, kullanicinin girdigi alt_sinir degerinden basliyor
    for (i = alt_sinir; i <= ust_sinir; i++)
    {
        toplam += i;
    }

    printf("%d ile %d arasindaki tum tamsayilarin toplami = %d\n", alt_sinir, ust_sinir, toplam);

    return 0;
}