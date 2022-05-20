//Reverse a number. Problem #[I]h

#include <stdio.h>
#include <stdlib.h>

long long reverseNumber(long long *n){
    long long p = abs(*n);
    long long new_no = 0;
    while (p > 0){
        new_no = (long long)(10*new_no) + (long long)(p%10);
        p /= 10;
    }
    if (*n < 0)
        return -1*new_no;
    else
        return new_no;
}

int main(){
    long long *p;
    p = NULL;
    long long number;p = &number;
    printf("Enter the number: ");
    scanf("%lld", p);
    printf("Original number: %lld\n", *p);
    printf("Reversed number: %lld\n", reverseNumber(p));
    return 0;
}
