#include <stdio.h>

int main()
{
    int gun;

    /* Kullanicidan, haftanin kacinci gunu oldugunun bilgisini al*/
    printf("Gunun, haftanin kacinci gunu oldugunu giriniz (1-7): ");
    scanf("%d", &gun);

    // switch icine kiyaslamak istedigimiz degiskeni yaziyoruz
    switch (gun)
    {
        case 1:
            printf("Pazartesi\n");
            break; // Islemi bitir ve switch blogundan cik
        case 2:
            printf("Sali\n");
            break;
        case 3:
            printf("Carsamba\n");
            break;
        case 4:
            printf("Persembe\n");
            break;
        case 5:
            printf("Cuma\n");
            break;
        case 6:
            printf("Cumartesi\n");
            break;
        case 7:
            printf("Pazar\n");
            break;
        // if-else yapisindaki en son "else" ile ayni mantik: Hicbir case tutmazsa burasi calisir
        default:
            printf("Gecersiz gun! Lutfen 1 ile 7 arasinda bir deger giriniz.\n");
            break;
    }

    return 0;
}