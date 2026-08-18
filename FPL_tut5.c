//Develop a program to implement basic matrix operations such as addition, subtraction, and multiplication using c programming.
#include <stdio.h>
int main()
{
    int str1[2][2] = {{1,2},{2,3}};
    int str2[2][2] = {{1,2},{2,3}};
    int result[2][2];
   
    for( int i = 0; i<2; i++) {
        for( int j = 0; j<2; j++) {
            result[i][j] = 0;
            for( int k = 0; k<2; k++) {
                result[i][j]+=str1[i][k]*str2[k][j];
            }
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
