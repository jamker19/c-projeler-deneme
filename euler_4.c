#include <stdio.h>
#include <math.h>

int main(void)
{
    int carpim;
    int temp;
    int palindrome = 0; // En büyük palindrom rekorunu korumak için 0'dan başlattık
    int max1 = 0, max2 = 0;

    // 3 basamaklı tüm sayı kombinasyonlarını denemek için iç içe döngüler
    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {

            carpim = i * j;

            // Harika çalışan dinamik basamak ayırma mantığın
            int b     = carpim % 10;
            int o     = (carpim / 10) % 10;
            int yuz   = (carpim / 100) % 10;
            int bin   = (carpim / 1000) % 10;
            int onbin = (carpim / 10000) % 10;
            int ybin  = (carpim / 100000) % 10;

            // Logaritma ile basamak sayısını yakalama zekan
            if ((int)log10(carpim) <= 4) {
                // Sayı 5 basamaklıysa tersini çevirme formülün
                temp = 10000 * b + 1000 * o + 100 * yuz + 10 * bin + onbin;
            } 
            else if ((int)log10(carpim) > 4) {
                // Sayı 6 basamaklıysa tersini çevirme formülün
                temp = 100000 * b + 10000 * o + 1000 * yuz + 100 * bin + 10 * onbin + ybin;
            }

            // Kodu kurtaran ve küçük sayıların üste yazmasını engelleyen efsane şartın!
            if (temp == carpim && carpim > palindrome) {
                palindrome = carpim; // Yeni rekoru kaydet
                max1 = i;            // Birinci çarpanı hafızaya al
                max2 = j;            // İkinci çarpanı hafızaya al
            }
        }
    }

    // Döngüler tamamen bitince hafızada kalan gerçek şampiyonları ekrana basıyoruz
    printf("En Buyuk Palindrom: %d\n", palindrome);
    printf("Carpanlar: %d ve %d\n", max1, max2);

    return 0;
}