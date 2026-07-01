/* 
 * Geliştirici: Ramazan Yılmaz
 * Kurum: Yıldız Teknik Üniversitesi
 * Kurs: BTK Akademi - C Programlama Dili Kursu 
 * 
 * DOSYA ADI: cok_boyutlu_diziler_matris.c
 */

/**
 * KONU: İki Boyutlu Diziler (Matrisler) ve İçiçe Döngü Mantığı
 * 
 * MÜHENDİSLİK NOTU: 
 * Excel'deki satır/sütun tabloları veya Yapay Zeka veri setleri 
 * kod dünyasında tam olarak bu mantıkla (matris) tutulur.
 * C dilinde bu mantığı çözmek, yarın Python ile Excel otomasyonu 
 * yaparken filtreleme algoritmalarını takır takır yazmanı sağlar.
 */

#include <stdio.h>

int main() {
    // 2 satır ve 3 sütundan oluşan matrisimiz (Excel tablosu gibi)
    // [0][0]=1, [0][1]=4, [0][2]=2  <- 1. Satır
    // [1][0]=3, [1][1]=6, [1][2]=8  <- 2. Satır
    int benimMatrisim[2][3] = { {1, 4, 2}, {3, 6, 8} };

    int satir, sutun; // i ve j yerine kafamız karışmasın diye isimleri netleştirdik

    printf("--- Matrisin Tum Elemanlari ---\n");
    // Dış döngü satırları kontrol eder (0'dan başlar, 2'den küçük olana kadar)
    for (satir = 0; satir < 2; satir++) {
        
        // İç döngü o satırın içindeki sütunları tek tek gezer (0'dan 3'e kadar)
        for (sutun = 0; sutun < 3; sutun++) {
            printf("%d ", benimMatrisim[satir][sutun]);
        }
        printf("\n"); // Bir satır bitince alt satıra geçmek için Enter fırlatıyoruz
    }

    printf("\n--- Kendimizden Bir Seyler Kattik: Sadece Cift Sayilar ---\n");
    /**
     * MÜHENDİSLİK CHALLENGE: 
     * Tüm tabloyu tararken araya bir 'if' filtresi koyduk.
     * Bu mantık, Excel'de "Sadece cirosu çift sayı olan satırları getir" demekle aynıdır.
     */
    for (satir = 0; satir < 2; satir++) {
        for (sutun = 0; sutun < 3; sutun++) {
            
            // Eğer elemanın 2'ye bölümünden kalan 0 ise (yani çift ise)
            if (benimMatrisim[satir][sutun] % 2 == 0) {
                printf("%d ", benimMatrisim[satir][sutun]);
            } else {
                printf("_ "); // Tek sayıların yerine boşluk niyetine çizgi koyalım ki düzen bozulmasın
            }
        }
        printf("\n");
    }

    return 0;
}