#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
 * =========================================================================
 * SORU: Printing Pattern Using Loops (HackerRank)
 * AMAÇ: n sayısı verildiğinde, iç içe geçen kare katmanlar oluşturmak.
 * (Örn: n=4 için en dış 4, sonra 3, sonra 2, en merkez 1 olacak)
 * =========================================================================
 * * MANTIK REHBERİ:
 * 1. Tablo her zaman karedir ve boyutu (2*n - 1) x (2*n - 1) olur.
 * 2. Bilgisayar matbaa gibi çalışır: satır satır, soldan sağa yazar.
 * 3. Bir hücrenin hangi katmanda olduğunu anlamak için, o hücrenin
 * tablonun 4 kenarına (Üst, Alt, Sol, Sağ) olan uzaklıklarına bakılır.
 * 4. Bu 4 uzaklıktan EN KÜÇÜK olanı bize "dışarıdan içeriye kaç adım yürüdüğümüzü" söyler.
 * 5. n sayısından bu en küçük mesafeyi (yürüdüğümüz adımı) çıkarırsak, 
 * o hücreye yazılması gereken doğru sayıyı buluruz.
 */

int main() 
{
    int n, k;
    
    // Kullanıcıdan n sayısını alıyoruz (Örn: 4)
    scanf("%d", &n);
    
    // Toplam satır sayısını bulmak için formülümüz: 2*n - 1
    // i değişkeni satırları temsil eder (0'dan başlar)
    for(int i = 0; i < 2 * n - 1; i++){
        
        // j değişkeni sütunları temsil eder (0'dan başlar)
        // Her bir satırın içinde, soldan sağa tüm sütunları tek tek gezeriz
        for(int j = 0; j < 2 * n - 1; j++){
            
            // --- 1. ADIM: 4 KENARA OLAN UZAKLIKLARI HESAPLA ---
            
            // Üst kenara uzaklık: Kaçıncı satırda olduğumuzdur.
            int ust = i;
            
            // Sol kenara uzaklık: Kaçıncı sütunda olduğumuzdur.
            int sol = j;
            
            // Alt kenara uzaklık: En son satır indeksinden (2*n-2), bulunduğumuz satırı çıkarırız.
            int alt = 2 * n - 2 - i;
            
            // Sağ kenara uzaklık: En son sütun indeksinden (2*n-2), bulunduğumuz sütunu çıkarırız.
            int sag = 2 * n - 2 - j;
            
            
            // --- 2. ADIM: ELEME USULÜ EN KÜÇÜK MESAFEYİ BUL ---
            
            // k değişkeni bizim şampiyonumuz (en küçük mesafeyi tutacak).
            // Turnuvayı doğrudan 'ust' mesafe ile başlatıyoruz.
            k = ust; 
            
            // Eğer alt mesafe şu anki k'den küçükse, yeni şampiyon alt olsun.
            if(alt < k) k = alt;
            
            // Eğer sağ mesafe şu anki k'den küçükse, yeni şampiyon sağ olsun.
            if(sag < k) k = sag;
            
            // Eğer sol mesafe şu anki k'den küçükse, yeni şampiyon sol olsun.
            if(sol < k) k = sol;
            
            // NOT: (ust < k) kontrolüne gerek yok çünkü zaten k'yi ust ile başlattık!
            
            
            // --- 3. ADIM: HESAPLA VE EKRANA YAZ ---
            
            // k artık en yakın kenara olan mesafemiz (içeri kaç adım attığımız).
            // Başlangıç değerimiz olan n'den bu mesafeyi çıkarıp ekrana basıyoruz.
            // Yan yana düzgün dursunlar diye sonuna bir boşluk bırakıyoruz.
            printf("%d ", n - k);
        }
        
        // Bir satırdaki tüm sütunlar (j döngüsü) bitince, 
        // yandaki satıra taşmamak için bir alt satıra geçiş komutu veriyoruz.
        printf("\n");
    }
    
    return 0;
}