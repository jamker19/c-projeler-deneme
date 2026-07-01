#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float kok1, kok2, imajiner;
    float diskriminant;

    printf("(ax^2 + bx + c) seklindeki ikinci derece denklemin a, b ve c katsayilarini giriniz: ");
    scanf("%f%f%f", &a, &b, &c);

    diskriminant = (b * b) - (4 * a * c);

    /* Diskriminanti incele */
    // Karsilastirma dogruysa switch'e 1, yanlissa 0 girer
    switch (diskriminant > 0)
    {
        case 1:
            /* diskriminant pozitifse */
            kok1 = (-b + sqrt(diskriminant)) / (2 * a);
            kok2 = (-b - sqrt(diskriminant)) / (2 * a);
            printf("Iki adet ayrik ve gercel kok bulunmaktadir: %.2f and %.2f\n", kok1, kok2);
            break;

        case 0:
            /* diskriminant pozitif degilse (yani ya 0'dir ya da kucuktur) */
            switch (diskriminant < 0)
            {
                case 1:
                    /* diskriminant negatifse (Karmasik kokler) */
                    kok1 = -b / (2 * a);
                    imajiner = sqrt(-diskriminant) / (2 * a);
                    printf("Reel kok yoktur, kokler karmasiktir:\n");
                    printf("Kok 1 = %.2f + %.2fi\n", kok1, imajiner);
                    printf("Kok 2 = %.2f - %.2fi\n", kok1, imajiner);
                    break;

                case 0:
                    /* diskriminant negatif de degilse (Yani tam 0'dir -> Esit kokler) */
                    kok1 = kok2 = -b / (2 * a);
                    printf("Birbirine esit iki reel kok vardir: %.2f\n", kok1);
                    break;
            }
            break;
    }

    return 0;
}