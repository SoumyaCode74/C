/* Write a program to compute the paper sizes of A0, A1, ..., A8.
size of A(n) = length of A(0) x half the breadth of A(n-1)
*/

#include <stdio.h>
#include <stdlib.h>

float paperWidth(int paper_count, int breadth){
    if (paper_count == 0)
        return breadth;
    else
        return 0.5*paperWidth(paper_count - 1, breadth);
}

int main(){
    int length; int breadth;
    int paper_count;
    printf("Enter the length and breadth of paper A0\n");
    scanf("%d", &length);
    scanf("%d", &breadth);
    printf("Enter the grade of sheet required (1 to 8)\n");
    scanf("%d", &paper_count);
    if (paper_count < 1 || paper_count > 8)
        printf("Incorrect paper type. Please try again!\n");
    else
        printf("The paper size of A%d is: %d mm x %3.3f mm", paper_count, length, paperWidth(paper_count, breadth));
    return 0;
}
