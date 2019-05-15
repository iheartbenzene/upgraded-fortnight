#include <stdio.h>
#include <math.h>

int displayPrimeNumbers();
int main(){
    printf("This is a test.");

    int r1, r2, k, flag;
    printf("Enter two whole numbers:");
    scanf("%d %d", &r1, &r2);
    printf("Here you go.");
    printf("Primes between %d and %d are as follows: ", &r1, &r2);

    for(k=r1+1; k<r2; ++k){
        flag = displayPrimeNumbers(k);

        if(flag == 1){
            printf("%d", &k);
        }
    }
    return 0;

}

int displayPrimeNumbers(int r){
    int j, flag = 1;

    for(j = 2; j <= r/2; ++j){
        if(r%j == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}