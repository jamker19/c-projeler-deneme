#include <stdio.h>

int main() {
    // 4 elemanli tam sayi dizimiz
    int benimDizim[] = {25, 50, 75, 100};
    int i;

    /* * DIZI VE DONGU ENTEGRASYONU:
     * Dongu sayacini (i) dizinin ilk indeksi olan 0'dan baslatiyoruz.
     * Dizi 4 elemanli oldugu icin indeksler en fazla 3 olabilir (0, 1, 2, 3).
     * Bu yuzden dongu sartini 'i < 4' olarak kuruyoruz.
     */
    for (i = 0; i < 4; i++)
    {
        /* benimDizim[i] ifadesiyle her turda sirasiyla:
         * benimDizim[0], benimDizim[1], benimDizim[2] ve benimDizim[3] basilir.
         */
        printf("%d ", benimDizim[i]);
    }

    printf("\n"); // Cikti sonrasi temiz bir alt satira gecis

    return 0;
}