//Design a C program to find out whether a given number is armstrong or not.
#include <stdio.h>
int main() {
    int num, acutal_num, rem, result = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    acutal_num = num;
    while (acutal_num != 0) {
        rem = acutal_num % 10;
        result = result + (rem * rem * rem);
        acutal_num = acutal_num/10;
    }
    
    if(num == result) {
        printf("\nThe number is an Armstrong number.");
    }
    else {
        printf("\nThe number is not an Armstrong number.");
    }

    return 0;
}
