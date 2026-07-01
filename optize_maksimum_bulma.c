#include <stdio.h>

int main()
{
    int sayi1, sayi2, sayi3, maksimum;

    printf("Lutfen 3 adet sayi giriniz: ");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);

    // 1. ADIM: sayi1 hem sayi2'den HEM DE sayi3'ten buyukse en buyuk sayi1'dir.
    if ((sayi1 > sayi2) && (sayi1 > sayi3))
    {
        /* sayi1 > sayi2 ve sayi1 > sayi3 ise */
        maksimum = sayi1;
    }
    // 2. ADIM: Ustteki sart yanlissa zaten sayi1 elenmistir. 
    // Geriye sadece sayi2 ve sayi3 kalir. O yuzden sadece ikisini kiyaslamak yeterlidir!
    else if (sayi2 > sayi3)
    {
        /* sayi1 > sayi2 degilse ve sayi2 > sayi3 ise */
        maksimum = sayi2;
    }
    // 3. ADIM: Yukaridaki iki durum da yanlissa, geriye tek ihtimal kalir: en buyuk sayi3'tur.
    else
    {
        /* sayi1 > sayi2 degilse; ayrica sayi2 > sayi3 degilse */
        maksimum = sayi3;
    }

    /* Maksimum degeri yazdir */
    printf("3 sayi icerisinde en buyuk deger = %d\n", maksimum);

    return 0;
}