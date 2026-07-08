/* BTK Akademi - C Programlama Dili Kursu */
/**
 * C programlama depolama konumu belirtecleri
 * register ve RAM / & isareti iliskisi
 */

#include <stdio.h>

int main()
{
    register int i;
    int sayi_dizisi[5] = {8, 10, 12, 14, 16};
    
    for (i = 0; i < 5; i++)
    {
        printf("sayi_dizisi[%d] = %d\n", i, sayi_dizisi[i]);
    }
    
    /* * HATA ANALIZLERI VE KURALLAR:
     * * 1) '&' isareti sadece RAM'deki bellek adreslerini okumak icin kullanilir.
     * 2) register degiskenler RAM yerine islemci icinde tutuldugundan adresleri yoktur.
     * 3) Bu yuzden register bir degisken, adrese ihtiyac duyan scanf ile KULLANILAMAZ.
     */
     
    // Alttaki satirlar aktifleştirilirse derleyici hata verir ve kod calismaz:
    // printf("i adresi: %p\n", &i);   // HATA! Register degiskenin adresi alinamaz.
    // scanf("%d", &i);                // HATA! scanf RAM adresi istedigi icin patlar.
    
    return 0;
}