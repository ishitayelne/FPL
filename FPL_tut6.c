//Design a C program that uses pointers to swap the values of two integers entered by the user. Print the values before and after swapping
#include <stdio.h>
int swap(int *x,int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
     int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);
    printf("First Number before swap %d\n", a);
    printf("Second Number before swap %d\n", b);
    swap(&a, &b);
    printf("First Number after swap %d\n", a);
    printf("Second Number after swap %d\n", b);

    return 0;
}
