//Create a C program to read a text file and count and display the total number of vowels present in the file.
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int vowels=0;

    fp=fopen("vowels.txt","r");
    if(fp == NULL) {
        printf("Couldn't open file");
    }
    
    while (fscanf(fp, "%c", &ch) != EOF) {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') {
            vowels++;
        }
    }

    printf("The numbers of vowels are %d",vowels);

    return 0;
}
