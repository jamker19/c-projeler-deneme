
#include <stdio.h>

int main(void) {
    /* Project Euler Problem 2:
       Calculate the sum of all even-valued Fibonacci numbers
       whose value does not exceed four million.
       This template contains only variable initialization and
       loop structure placeholders; the actual solution logic
       should be implemented in the while loop below. */

    int a = 1;      /* first Fibonacci number */
    int b = 2;      /* second Fibonacci number */
    int sum = 0;    /* accumulator for result */
    int next = 0;   /* placeholder for next Fibonacci */

    /* Empty while loop - condition and body to be implemented when solving */
    while (b<=4000000) {
       
    next=a+b;
        if(b%2==0){
           

            sum+=b;   //1 2 3 5 8 
        }

        
        
        
        a=b;
        b=next;


        
    }

 printf("%d\n",sum);
    return 0;
}
