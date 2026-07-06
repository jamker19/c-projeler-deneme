#include <stdio.h>

int main(void)
{
    /* Project Euler 1: Multiples of 3 and 5
       Compute the sum of all the multiples of 3 or 5 below a given limit.
       This file provides a basic C skeleton without the implementation details.
    */

    int limit = 10;
    int sum = 0;

    for(int i=0;i<limit;i++){

        if(i%5==0 || i%3==0){

            sum+=i;
        }

    }

   

    printf("Sum of multiples: %d\n", sum);
    return 0;
}