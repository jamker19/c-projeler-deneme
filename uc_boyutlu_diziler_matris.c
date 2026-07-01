#include <stdio.h>

int main() {

    // 3 Boyutlu Dizi Mantığı
    // [2]: 2 farklı sayfa/tablo var (i döngüsü yönetir)
    // [3]: Her sayfada 3 satır var (j döngüsü yönetir)
    // [4]: Her satırda yan yana 4 sütun var (k döngüsü yönetir)
    int benimMatrisim[2][3][4] = { { {3, 4, 2, 3}, {0, -3, 9, 11}, {23, 12, 23, 2} },
                                   { {13, 4, 56, 3}, {5, 9, 3, 5}, {3, 1, 4, 9} } };
    
    int i, j, k;
    
    // Tabloları gezen dış döngü (Sayfa 1 ve Sayfa 2)
    for (i = 0; i < 2; i++)
    {
        // Seçili tablonun satırlarını gezen döngü
        for (j = 0; j < 3; j++)
        {
            // Satırın içindeki sütunları (sayıları) tek tek basan döngü
            for (k = 0; k < 4; k++)
            {
                printf("%d ", benimMatrisim[i][j][k]);
            }
            printf("\n"); // Bir satır tamamen bitince aşağı kaydır
        }
        printf("............\n"); // Bir sayfa/tablo tamamen bitince araya çizgi çek
    }

    // MÜHENDİSLİK CHALLENGE: Sadece Çift Sayıları Ekrana Basma
    // Bu mantık, ileride veri analizi yaparken filtreleme algoritmalarını rahatça yazmanı sağlar.
    printf("\n--- Kendimizden Bir Şeyler Kattık: Sadece Cift Sayilar ---\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                // Sayının 2'ye bölümünden kalan 0 ise (yani çift sayı ise) ekrana yazdır
                if (benimMatrisim[i][j][k] % 2 == 0) {
                    printf("%d ", benimMatrisim[i][j][k]);
                } else {
                    printf("   "); // Tek sayıların yerini boş bırakarak tabloyu bozma
                }
            }
            printf("\n");
        }
        printf("............\n");
    }

    return 0;
}