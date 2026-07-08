/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama dilinde dinamik bellek yönetimi
 * malloc() fonksiyonu kullanımı
 */

#include <stdio.h>
#include <stdlib.h> // malloc, free ve exit fonksiyonları bu kütüphanede bulunur.

int main() {
    // n: kullanıcıdan alınacak eleman sayısı.
    // i: for döngüsü için sayaç.
    // *isaretci: RAM'de ayrılacak dinamik bölgenin başlangıç adresini tutacak pointer.
    // toplam: girilen sayıların kümülatif toplamını tutar.
    int n, i, *isaretci, toplam = 0;

    // 1. ADIM: Kullanıcıdan kaç adet sayı girmek istediğini öğreniyoruz.
    printf("Toplanacak eleman sayisini giriniz: ");
    scanf("%d", &n);

    // 2. ADIM: malloc (Memory Allocation) ile RAM'den dinamik yer istiyoruz.
    // sizeof(int) -> Bir tamsayının bellekte kaç byte kapladığını bulur (genelde 4 byte).
    // n * sizeof(int) -> Toplamda kaç byte'lık bir alana ihtiyacımız olduğunu hesaplar.
    // (int*) -> malloc'un döndürdüğü boş adresi, tamsayı (int) işaretçisine dönüştürür.
    isaretci = (int*) malloc(n * sizeof(int));

    // bellek ayırma (tahsis) işleminin başarısız
    // olması durumunda
    // (Örn: Bilgisayarda hiç RAM kalmadıysa malloc geriye NULL döndürür)
    if(isaretci == NULL) {
        printf("Hata! Bellek ayirma islemi basarisiz oldu.");
        exit(0); // Programı hata ile sonlandırır.
    }

    // 3. ADIM: Dinamik olarak ayrılan bu bölgeye kullanıcıdan sayıları alıyoruz.
    printf("Toplanacak elemanlari giriniz: ");
    for(i = 0; i < n; ++i) {
        // isaretci + i -> Adres aritmetiği kullanarak sıradaki elemanın RAM adresine gider.
        // scanf doğrudan adres beklediği için başına '&' koymaya gerek yoktur.
        scanf("%d", isaretci + i);
        
        // *(isaretci + i) -> O adresteki kutunun içine bakıp içindeki gerçek sayıyı çeker.
        toplam += *(isaretci + i);
    }

    // 4. ADIM: Hesaplanan toplamı ekrana bastırıyoruz.
    printf("Toplam = %d", toplam);

    // ayrılmış (tahsis edilmiş) olan belleği
    // serbest bırak
    // UYARI: free yapılmazsa program kapansa bile o alan RAM'de şişkinlik yapmaya devam edebilir (Memory Leak).
    free(isaretci);

    return 0;
}