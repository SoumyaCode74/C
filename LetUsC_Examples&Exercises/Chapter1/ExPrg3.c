//Find the sum of first and last digits of a given number
#include <stdio.h>
#include <stdlib.h>


int sumFirstLast(long n){
    n = abs(n);
    int last_digit = n % 10;
    int sum = last_digit;
    n /= 10;
    while (1){
        int digit = n % 10;
        n /= 10;
        if (n == 0){
            sum += digit;
            break;
        }
    }
    return sum;
}

int main(){
    long n;
    printf("Enter the number: ");
    scanf("%ld", &n);
    printf("The sum of first and last digits of %ld is %d", n, sumFirstLast(n));
    return 0;
}
