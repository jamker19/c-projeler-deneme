#include <stdio.h>

int main()
{
    char islem;
    float sayi1, sayi2, sonuc = 0.0f;

    /* Karsilama mesaji yazdir */
    printf("BASIT HESAP MAKINESI UYGULAMASI\n");
    printf("--------------------------------\n");
    printf("Lutfen [sayi 1] [+ - * /] [sayi 2] giriniz\n");

    /* Iki sayiyi ve islem isaretini kullanicidan al */
    // Formatlar arasindaki bosluklar char okurken hata olusmasini engeller
    scanf("%f %c %f", &sayi1, &islem, &sayi2);

    /* Islem isaretine gore faaliyet gerceklestir */
    switch (islem)
    {
        case '+':
            sonuc = sayi1 + sayi2;
            printf("Sonuc: %.2f\n", sonuc);
            break;
        case '-':
            sonuc = sayi1 - sayi2;
            printf("Sonuc: %.2f\n", sonuc);
            break;
        case '*':
            sonuc = sayi1 * sayi2;
            printf("Sonuc: %.2f\n", sonuc);
            break;
        case '/':
            // Sifira bolme hatasini (runtime error) engellemek icin kucuk bir kontrol ekleyelim
            if (sayi2 != 0.0f)
            {
                sonuc = sayi1 / sayi2;
                printf("Sonuc: %.2f\n", sonuc);
            }
            else
            {
                printf("Hata: Bir sayi sifira bolunemez!\n");
            }
            break;
        default:
            printf("Hata: Gecersiz bir islem operatoru girdiniz!\n");
            break;
    }

    return 0;
}