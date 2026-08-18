//Design a C program to generate a quiz that gives answers for MCQs and displays the total score at the end of the code.
#include <stdio.h>

int main() {
    int ans1, ans2, ans3, ans4, ans5;
    int score = 0;
    printf("Welcome to MCQ test!");
    //Question 1 start
    printf("\nQ1. What is the capital of India?\n1) Chennai\n2) Jaipur\n3) Delhi\n4) Mumbai");
    printf("\nEnter your answer :- ");
    scanf("%d", &ans1);
    if(ans1 == 3) {  
        printf(" Answer is correct!\n");
        score++;
    }
    //Question 1 end
    
    //Question 2 start
    printf("\nQ2. What is the national bird of India?\n1) Peacock\n2) Sparrow\n3) Dove\n4) Crow");
    printf("\nEnter your answer :- ");
    scanf("%d", &ans2);
    if(ans2 == 1) {  
        printf(" Answer is correct!\n");
        score++;
    }
    //Question 2 end
    
    //Question 3 start
    printf("\nQ3. What is the value of pi?\n1) 3.18\n2) 3.16\n3) 3.13\n4) 3.14");
    printf("\nEnter your answer :- ");
    scanf("%d", &ans3);
    if(ans3 == 4) {  
        printf(" Answer is correct!\n");
        score++;
    }
    //Question 3 end
    
    //Question 4 start
    printf("\nQ4. Who invented zero?\n1) Aryabhatta\n2) Einstein\n3) Panini\n4) Isaac Newton");
    printf("\nEnter your answer :- ");
    scanf("%d", &ans4);
    if(ans4 == 1) {  
        printf(" Answer is correct!\n");
        score++;
    }
    //Question 4 end
    
    //Question 5 start
    printf("\nQ5. What is 68+52?\n1) 100\n2) 120\n3) 180\n4) 150");
    printf("\nEnter your answer :- ");
    scanf("%d", &ans5);
    if(ans5 == 2) {  
        printf(" Answer is correct!\n");
        score++;
    }
    //Question 5 end
    
    printf(" \nYou scored %d out of 5 \n", score);

    return 0;
}
