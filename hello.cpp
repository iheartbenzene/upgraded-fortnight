#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int displayPrimeNumbers();
unsigned long factorial(int n);

int main(void){
    printf("This is a test. \r\n");

    // int r1, r2, k, flag;
    // printf("Enter two whole numbers:");
    // scanf("%d %d", &r1, &r2);
    // printf("Here you go.");
    // printf("Primes between %d and %d are as follows: ", &r1, &r2);

    // for(k=r1+1; k<r2; ++k){
    //     flag = displayPrimeNumbers(k);

    //     if(flag == 1){
    //         printf("%d", &k);
    //     }
    // }
    // return 0;

    int n = 3;
    printf("%d factorial is: %d", n, factorial(n));

}

int displayPrimeNumbers(int r)
{
    int j, count = 1;

    for(j = 2; j <= r/2; ++j){
        if(r%j == 0){
            count = 0;
            break;
        }
    }
    return count;
}

unsigned long factorial(int n)
{
    if (n <= 1) 
    {
        return 1;
    }
    else if (n > 1)
    {
        return n * factorial(n-1);
    }
}

// START HERE