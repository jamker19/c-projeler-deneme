#include <stdio.h>

int main()
{
    int i, n;

    /* Kullanicidan ust sinir degerini al */
    printf("Ust sinir degerini giriniz: ");
    scanf("%d", &n);

    printf("1'den %d'ye kadar tum cift sayilar:\n", n);

    /* 1'den n'ye kadar tum sayilari sirayla donüyoruz */
    for (i = 1; i <= n; i++)
    {
        /* * SART KONTROLÜ:
         * i degiskeninin 2'ye bolumunden kalan 0 ise (i % 2 == 0)
         * bu sayi cifttir ve ekrana basilir.
         */
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}