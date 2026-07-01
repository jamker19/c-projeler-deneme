#include <stdio.h>

int main()
{
    int gun;

    /* Kullanicidan, haftanin kacinci gunu oldugunun bilgisini al*/
    printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7): ");
    scanf("%d", &gun);

    // 1'den 7'ye kadar tum gunleri kontrol eden if-else merdiveni
    if (gun == 1)
    {
        printf("Pazartesi\n");
    }
    else if (gun == 2)
    {
        printf("Sali\n");
    }
    else if (gun == 3)
    {
        printf("Carsamba\n");
    }
    else if (gun == 4)
    {
        printf("Persembe\n");
    }
    else if (gun == 5)
    {
        printf("Cuma\n");
    }
    else if (gun == 6)
    {
        printf("Cumartesi\n");
    }
    else if (gun == 7)
    {
        printf("Pazar\n");
    }
    // Kullanici 1-7 disinda bir sayi girerse hatali giris uyarisi veriyoruz
    else
    {
        printf("Gecersiz gun! Lutfen 1 ile 7 arasinda bir deger giriniz.\n");
    }

    return 0;
}