#include <stdio.h>
#include <stdint.h>

int main()
{
    long long int max = 0;                  /* Bulduğumuz en büyük asal çarpanı burada saklayacağız */
    long long int number = 600851475143;    /* Project Euler Problem 3'teki analiz edeceğimiz devasa sayı */

    /* Küçükten büyüğe doğru (2'den başlayarak) tüm çarpanları tek tek geziyoruz.
       Burada '<=' (küçük eşittir) kullanmamız kritik; çünkü sayı bölüne bölüne küçüldüğünde 
       en son kalan asal çarpan ile 'j' birbirine eşitleniyor. İçeri girebilmek için eşitliği kontrol etmeliyiz.
    */
    for (long long int j = 2; j <= number; j++) {

        /* Eğer 'number' sayısı o anki 'j' değerine tam bölünüyorsa (kalan 0 ise) 
           while döngüsüne giriyoruz. Sayı 'j'ye bölünmeyene kadar bu işlem tekrar ediyor.
        */
        while (number % j == 0) {

            number = number / j;  /* Sayıyı 'j'ye bölerek küçültüyoruz (Erite erite gidiyoruz) */
            max = j;              /* Tam bölündüğü için o anki 'j'yi en büyük asal çarpan olarak güncelliyoruz */

        } /* while döngüsü sonu: Sayı artık 'j'ye bölünmediğinde bu döngüden çıkıp j++ ile sonraki sayıya geçer */
        
    } /* for döngüsü sonu: 'number' değişkeni 1'e ulaştığında veya j > number olduğunda ana döngü biter */

    /* Bulduğumuz ve hafızaya (max) kaydettiğimiz en son (en büyük) asal çarpanı ekrana yazdırıyoruz */
    printf("%lld\n", max);
    
    return 0;
}