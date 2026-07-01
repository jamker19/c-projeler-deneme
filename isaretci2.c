#include <stdio.h>

int main()
{
    // 1. ADIM: Değişkenleri ve onlara bakacak işaretçileri (pointer) tanımlıyoruz
    int sayi1, sayi2, toplam;
    int *isaretci1, *isaretci2;

    // 2. ADIM: İşaretçilere, sayıların bellekteki adreslerini emanet ediyoruz
    isaretci1 = &sayi1; // isaretci1 artık sayi1'in adresini biliyor
    isaretci2 = &sayi2; // isaretci2 artık sayi2'in adresini biliyor

    printf("Iki sayi giriniz: ");
    
    // 3. ADIM: EN KRİTİK YER! 
    // Normalde scanf içine &sayi1 yazardık (adresini vermek için).
    // Ama isaretci1 zaten doğrudan adresi tuttuğu için başına tekrar '&' koymuyoruz!
    scanf("%d%d", isaretci1, isaretci2); 

    // 4. ADIM: Yıldız (*) işareti ile adreslerin İÇİNDEKİ değerleri çekip topluyoruz
    toplam = *isaretci1 + *isaretci2;

    printf("Toplam = %d\n", toplam);

    return 0;
}