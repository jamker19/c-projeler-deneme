#include <stdio.h>

int main()
{
    int yil;

    /* Kullanicidan yil degerini aliniz */
    printf("Yil degerini giriniz : ");
    scanf("%d", &yil);

    /* * ARTIK YIL KURALI:
     * Bir yil 4'e tam bolunebilmeli VE 100'e tam bolunememeli,
     * VEYA dogrudan 400'e tam bolunebilmeli.
     * C dilinde kalan bulma islemi % (mod) operatoru ile yapilir.
     */
    if (((yil % 4 == 0) && (yil % 100 != 0)) || (yil % 400 == 0))
    {
        printf("Soz konusu yil, artik yildir!...\n");
    }
    else
    {
        printf("Soz konusu yil, artik yil degildir!...\n");
    }

    return 0;
}