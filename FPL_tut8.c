//Create a C program that counts the frequency of each character in a string using pointers and displays the results.
#include <stdio.h>

int main() {
    char str[50];
    int freq[256] = {0};
    char *ptr;
    printf("Enter String: ");
    scanf("%s", str);  
    ptr = str;
    while (*ptr != '\0') {
        freq[*ptr]++;  
        ptr++;                        
    }
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("Frequency(%c) = %d\n", i, freq[i]);
        }
    }
    
    return 0;
}
