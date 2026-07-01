#include <stdio.h>

int main() {
    // Farkli degerlerden olusan tamsayi dizimiz
    int benimDizim[] = {3, 8, 1, 7, 2, 9, 5, 4};
    
    // Yarismayi baslatmak icin gecici olarak ilk elemani en buyuk kabul ediyoruz
    int en_buyuk_deger = benimDizim[0];
    int konum = 0; // En buyuk elemanin hangi indekte oldugunu tutacak
    
    /* * DINAMIK BOYUT HESABI:
     * sizeof(benimDizim)    -> Dizinin RAM'deki toplam boyutu (8 eleman * 4 byte = 32 byte)
     * sizeof(benimDizim[0]) -> Dizinin 1 elemaninin boyutu (int = 4 byte)
     * 32 / 4 = 8 (Eleman sayisi dinamik olarak bulundu!)
     */
    int boyut = sizeof(benimDizim) / sizeof(benimDizim[0]);
    
    // Dizinin tum elemanlarini sirayla geziyoruz
    for(int indeks = 0; indeks < boyut ; indeks++)
    {
        /* * EN BUYUK DEGER KONTROLÜ:
         * Eger o an baktigimiz eleman, elimizdeki en buyuk degerden buyukse
         * yeni liderimizi ve onun bulundugu indeksi (konumu) guncelliyoruz.
         */
        if(benimDizim[indeks] > en_buyuk_deger){
            en_buyuk_deger = benimDizim[indeks];
            konum = indeks;
        }
    }

    // Sonuclari ekrana formatli sekilde basiyoruz
    printf("Dizinin en buyuk elemani: %d\n", en_buyuk_deger);
    printf("Bu elemanin dizideki indeksi (konumu): %d\n", konum);
    printf("Insan diliyle kaçinci eleman oldugu: %d. eleman\n", konum + 1);

    return 0;
}