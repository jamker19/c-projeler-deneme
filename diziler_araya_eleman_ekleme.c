#include <stdio.h>

int main() {
    int eklenecek_sayi, eklenecek_indeks;
    
    /* DIKKAT: Araya eleman ekledigimizde dizinin boyutu 1 artacagi icin
     * tasmayi (overflow) onlemek adina bastan fazladan yer (ornegin 20 elemanlik) ayiriyoruz.
     */
    int BenimDizim[20] = {3, 4, 1, 9, 6, 2, 8}; 
    
    // Su an icinde aktif olarak 7 eleman var
    int boyut = 7; 

    // Mevcut diziyi ekrana basiyoruz
    for(int indeks = 0; indeks < boyut; indeks++){
        printf("%d ", BenimDizim[indeks]);
    }
    
    printf("\nDiziye eklenecek sayiyi giriniz: ");
    scanf("%d", &eklenecek_sayi);
    
    printf("Sayinin hangi indekse eklenecegini belirtiniz: ");
    scanf("%d", &eklenecek_indeks);

    /* * ALGORITMANIN KALBI (KAYDIRMA ISLEMI):
     * En sondaki elemandan baslayarak, ekleme yapacagimiz indekse kadar 
     * tum elemanlari birer adim saga (indeks + 1 konumuna) kopyaliyoruz.
     */
    for(int i = boyut - 1; i >= eklenecek_indeks; i--) {
        BenimDizim[i + 1] = BenimDizim[i];
    }

    // Bosalan o indekse yeni sayiyi yerlestiriyoruz
    BenimDizim[eklenecek_indeks] = eklenecek_sayi;
    
    // Artik dizide 1 eleman daha var, boyutu guncelliyoruz
    boyut++;

    // Yeni diziyi ekrana basiyoruz
    printf("Eleman eklendikten sonra yeni dizi:\n");
    for(int indeks = 0; indeks < boyut; indeks++){
        printf("%d ", BenimDizim[indeks]);
    }
    printf("\n");

    return 0;
}