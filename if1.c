#include <stdio.h>

int main()
{
    // 1. ADIM: Kullanicidan alacagimiz iki sayi icin degiskenleri tanimliyoruz
    int sayi1, sayi2;

    /* Kullanicidan iki sayi al */
    printf("Lutfen iki sayi degeri giriniz: ");
    scanf("%d%d", &sayi1, &sayi2); // Girilen sayilar hafizadaki adreslerine kaydedilir

    // 2. ADIM: if kosullari ile sayilari karsilastiriyoruz
    
    /* sayi1 daha buyukse */
    if (sayi1 > sayi2)
    {
        printf("%d daha buyuktur\n", sayi1);
    }

    /* sayi2 daha buyukse */
    if (sayi2 > sayi1)
    {
        printf("%d daha buyuktur\n", sayi2);
    }

    /* esitlik durumunu da kontrol et */
    if (sayi1 == sayi2)
    {
        printf("Iki sayi esittir\n");
    }

    return 0;
}