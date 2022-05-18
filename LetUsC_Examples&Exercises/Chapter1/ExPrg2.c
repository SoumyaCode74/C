//Reverse a number. Problem #[I]h

#include <stdio.h>
#include <stdlib.h>

long reverseNumber(long *n){
    long p = abs(*n);
    long new_no = 0;
    while (p > 0){
        new_no = (10*new_no) + (p%10);
        p /= 10;
    }
    if (*n < 0)
        return -1*new_no;
    else
        return new_no;
}

long main(){
    long *p;
    p = NULL;
    long number;p = &number;
    printf("Enter the number: ");
    scanf("%ld", p);
    printf("Original number: %ld\n", *p);
    printf("Reversed number: %ld\n", reverseNumber(p));
    return 0;
}
