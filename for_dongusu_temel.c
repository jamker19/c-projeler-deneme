#include <stdio.h>

int main()
{
    // i: dongu sayacimiz (iterator), n: kullanicidan alacagimiz ust sinir
    int i, n;

    /* Kullanicidan ust sinir degerini al */
    printf("Ust sinir degerini giriniz: ");
    scanf("%d", &n);

    printf("1'den %d'ye kadar tum sayma sayilari:\n", n);

    /* * FOR DONGUSU ANATOMISI:
     * 1. Kisim (i = 1)   -> Baslangic degeri. Dongu baslarken 1 kez calisir.
     * 2. Kisim (i <= n)  -> Dongunun devam etme sarti. Dogru (1) oldugu surece dongu doner.
     * 3. Kisim (i++)     -> Her tur bittiginde sayaci 1 artirir.
     */
    for (i = 1; i <= n; i++)
    {
        // Dongunun her adiminda guncel 'i' degerini ekrana basiyoruz
        printf("%d\n", i);
    }

    return 0;
}