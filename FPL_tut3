//Design a C program that takes an integer input and prints its reverse
#include <stdio.h>
int main() {
    int num, reverse=0, digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num!=0) {
        digit = num%10;
        reverse = reverse*10+digit;
        num = num/10;
    }
    printf("\nReverse of above number is %d", reverse);
    
    return 0;
}
