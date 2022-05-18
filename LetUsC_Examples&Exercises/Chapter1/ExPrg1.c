//Chapter 1, Program [I].f. Attempting using pointers instead of pass by value

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int m; int n;
    int *p1; int *p2;
    p1 = NULL;
    p2 = NULL;
    printf("Enter two numbers: \n");
    scanf("%d", &m);
    scanf("%d", &n);
    p1 = &m; p2 = &n;
    printf("Before interchange: A = %d, B = %d\n", *p1, *p2);
    swap(p1, p2);
    printf("After interchange: A = %d, B = %d\n", *p1, *p2);
    return 0;
}
