// Design a C program that calculates factorial of a number using recursive and iterative
#include <stdio.h>
int fact(int n) {
    if (n==1 || n==0) {
        return 1;
    }
    else {
        return (n*fact(n-1));
    }
}

//Recursive code
int main() {
    int a,b,result;
    printf("Enter a number: ");
    scanf("%d", &a);
    result = fact(a);
    printf("\nFactorial of %d by recurssion is %d", a, result);

//Iterative code
    printf("\n\nEnter a number: ");
    scanf("%d", &b);
    int num = 1;
    for(int i=b ; i>=1 ; i--) {
        num = num*i;
    }
    printf("\nFactorial of %d by iteration is %d", b,num);
    
    return 0;
}
