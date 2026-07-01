#include <stdio.h>

int main()
{
    int sayi1, sayi2, sayi3, maksimum;

    printf("Uc sayi giriniz: ");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);

    // 1. ANA BLOK: sayi1, sayi2'den büyükse buraya girilir
    if (sayi1 > sayi2)
    {
        // sayi1, sayi2'den büyüktü. Peki sayi3'ten de büyük mü?
        if (sayi1 > sayi3)
        {
            /* sayi1 > sayi2 ve sayi1 > sayi3 ise */
            maksimum = sayi1;
        }
        else
        {
            /* sayi1 > sayi2, ancak sayi1 > sayi3 degilse (yani sayi3 en büyükse) */
            maksimum = sayi3;
        }
    }
    // 2. ANA BLOK: sayi1, sayi2'den büyük DEĞİLSE (yani sayi2 >= sayi1 ise) buraya girilir
    else
    {
        // sayi2, sayi1'den büyüktü. Peki sayi3'ten de büyük mü?
        if (sayi2 > sayi3)
        {
            /* sayi1 > sayi2 degilse; ve sayi2 > sayi3 ise */
            maksimum = sayi2;
        }
        else
        {
            /* sayi2, sayi1'den büyük ama sayi3'ten büyük degilse (yani sayi3 en büyükse) */
            maksimum = sayi3;
        }
    }

    // Sonucu ekrana yazdırıyoruz
    printf("Girilen en buyuk sayi (Maksimum): %d\n", maksimum);

    return 0;
}