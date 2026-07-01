#include <stdio.h>

int main()
{
    int sayi1, sayi2, sayi3, maksimum;

    /* Kullanicidan 3 sayi degeri al */
    printf("Lutfen 3 adet sayi giriniz: ");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);

    // 1. ADIM: sayi1 hem sayi2'den HEM DE sayi3'ten büyükse en büyük sayi1'dir.
    if ((sayi1 > sayi2) && (sayi1 > sayi3))
    {
        /* sayi1 diger ikisinden de buyukse */
        maksimum = sayi1;
    }
    // 2. ADIM: Üstteki şart tutmadıysa bakılır: sayi2 diğer ikisinden de büyük mü?
    else if ((sayi2 > sayi1) && (sayi2 > sayi3))
    {
        /* sayi2 diger ikisinden de buyukse */
        maksimum = sayi2;
    }
    // 3. ADIM: Yukarıdakilerin hiçbiri değilse, otomatik olarak sayi3 diğer ikisinden büyüktür.
    // (Hoca videoda "else if" ile uzun uzun yazmaya başlamış ama doğrudan düz bir "else" demek çok daha pratiktir)
    else
    {
        maksimum = sayi3;
    }

    // Sonucu ekrana yazdırıyoruz
    printf("Girilen en buyuk sayi (Maksimum): %d\n", maksimum);

    return 0;
}