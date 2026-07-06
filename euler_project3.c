#include <stdio.h>
#include <stdint.h>

int main()
{
    long long int max = 0;
   long long int number = 600851475143;
    // 'int i' yerine 'long long int i' yaptık ki 2 milyar sınırını aşıp eksiye düşmesin
   

        // İçteki j değerini de long long int yaptık
        for (long long int j = 2; j <=number; j++) {

          while(number%j==0){

            number=number/j;
            max=j;



          }
       }

        
    
    printf("%lld\n", max);
    return 0;
}