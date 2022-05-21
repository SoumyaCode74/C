/* Reverse a positive integer using recursion
*/

#include <stdio.h>

void reverseNumber(int x, int *y){
    if (x >= 0 && x <= 9){
        *y = 10 * *y + x;
    }
    else{
        *y = 10 * *y + x % 10;
        reverseNumber(x/10, y);
    }
}

int main(){
    printf("Enter a positive number\n");
    int n;
    int rev = 0;
    int *p;
    p = NULL;
    scanf("%d", &n);
    p = &rev;
    reverseNumber(n, p);
    printf("The reverse of %d is %d\n", n, rev);
    return 0;
}
