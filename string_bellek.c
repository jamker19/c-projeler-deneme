/* BTK Akademi - C Programlama Dili Kursu */
/**
 * BASLIK: Stringlerin Bellek Boyutu (sizeof Kullanimi)
 * ACIKLAMA: Cift tirnak ile tanimlanan stringler ile karakter karakter
 * tanimlanan dizilerin bellekteki kapladigi alanin karsilastirilmasi.
 */

#include <stdio.h>

int main() {
    // Çift tırnak ile tanımlamalarda C derleyicisi metnin sonuna otomatik olarak '\0' ekler.
    char karsilama_mesaji1[] = "Merhaba!";
    
    // Karakter karakter tanımlamalarda stringin bittiğini belirtmek için '\0' bizim eklememiz gerekir.
    char karsilama_mesaji2[] = {'M','e','r','h','a','b','a','!','\0'};

    /* * Boyutlari ekrana yazdir */
    // sizeof operatörü dizinin bellekte kapladığı toplam bayt (byte) miktarını verir.
    // %lu format belirteci "unsigned long" veri tipleri için kullanılır (sizeof çıktısı için idealdir).
    printf("%lu\n", sizeof(karsilama_mesaji1));
    
    printf("\n...\n");
    
    printf("%lu\n", sizeof(karsilama_mesaji2));

    return 0;
}