//Design a C program that calculates elements in an array
#include <stdio.h>

int main() {
    int array[5];
    int sum = 0;
    int i;
    printf("Enter elements in an array: \n");
    
    for(i=0; i<5; i++)
    {
        scanf("%d", &array[i]);
    }
    
    for(i=0; i<5; i++)
    {
        sum = sum + array[i];
    }
    
    printf("\nTotal number of elements in an array: %d", sum);
    return 0;
}
