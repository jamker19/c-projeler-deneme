#include <stdio.h>
#include <math.h> /* sqrt() fonksiyonu (karekok) icin kullanilacaktir */

int main()
{
    // Ondalikli katsayilar ve sonuclar icin float kullaniyoruz
    float a, b, c;
    float kok1, kok2, imajiner;
    float diskriminant;

    printf("(ax^2 + bx + c) seklindeki ikinci derece denklemin a, b ve c katsayilarini giriniz: ");
    scanf("%f%f%f", &a, &b, &c);

    /* Denklemin diskriminantini (Delta) hesapla: b^2 - 4ac */
    diskriminant = (b * b) - (4 * a * c);

    // 1. DURUM: Diskriminant 0'dan buyukse iki farkli reel kok vardir
    if (diskriminant > 0)
    {
        kok1 = (-b + sqrt(diskriminant)) / (2 * a);
        kok2 = (-b - sqrt(diskriminant)) / (2 * a);
        printf("Iki farkli reel kok vardir:\n");
        printf("Kok 1 = %.2f\n", kok1);
        printf("Kok 2 = %.2f\n", kok2);
    }
    // 2. DURUM: Diskriminant 0'a esitse birbirine esit (cakisik) iki kok vardir
    else if (diskriminant == 0)
    {
        kok1 = kok2 = -b / (2 * a);
        printf("Birbirine esit iki reel kok vardir:\n");
        printf("Kok 1 = Kok 2 = %.2f\n", kok1);
    }
    // 3. DURUM: Diskriminant 0'dan kucukse reel kok yoktur, kokler karmasiktir (imajiner)
    else
    {
        kok1 = -b / (2 * a);
        imajiner = sqrt(-diskriminant) / (2 * a);
        printf("Reel kok yoktur, kokler karmaisktir (imajiner):\n");
        printf("Kok 1 = %.2f + %.2fi\n", kok1, imajiner);
        printf("Kok 2 = %.2f - %.2fi\n", kok1, imajiner);
    }

    return 0;
}