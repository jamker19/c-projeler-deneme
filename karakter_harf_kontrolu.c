#include <stdio.h>

int main()
{
    // Karakterler icin char veri tipini kullaniyoruz
    char karakter;

    /* Kullanicidan bir karakter al */
    printf("Lutfen bir karakter giriniz: ");
    scanf("%c", &karakter); // Karakter alirken %c format belirleyicisi kullanilir

    /* * MANTIK: Girilen karakter;
     * 'a' ile 'z' arasinda (kucuk harf) VEYA 'A' ile 'Z' arasinda (buyuk harf) ise
     * alfabetik bir harftir.
     */
    if ((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z'))
    {
        printf("Alfabetik bir karakter girdiniz.\n");
    }
    else
    {
        printf("Girdiginiz karakter alfabetik bir harf degildir.\n");
    }

    return 0;
}