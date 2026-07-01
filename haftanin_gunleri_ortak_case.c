#include <stdio.h>

int main()
{
    int gun;

    /* Kullanicidan, haftanin kacinci gunu oldugunun bilgisini al*/
    printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7): ");
    scanf("%d", &gun);

    switch (gun)
    {
        // ORTAK CASE KULLANIMI: 1, 2, 3, 4 veya 5 durumunda ortak kod calisir
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Hafta Ici\n");
            break; // Ortak cikis

        // 6 veya 7 durumunda ortak kod calisir
        case 6:
        case 7:
            printf("Hafta Sonu\n");
            break; // Ortak cikis

        default:
            printf("Gecersiz deger!... Lutfen 1 ile 7 arasinda bir sayi giriniz.\n");
            break;
    }

    return 0;
}