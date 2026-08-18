//Create a struct student for storing information, name, id, age and marks and update the structure for two students
#include <stdio.h>
struct student {
    char name[10];
    int stu_id;
    int age;
    float marks;
};

int main() {
    struct student s[2];
    
    for(int i=0; i<2; i++) {
        printf("\n\nEnter name of student: ");
        scanf("%s", &s[i].name);
        printf("Enter ID of student: ");
        scanf("%d", &s[i].stu_id);
        printf("Enter age of student: ");
        scanf("%d", &s[i].age);
        printf("Enter marks of student: ");
        scanf("%f", &s[i].marks);
    }
    
    for(int i=0; i<2; i++) {
        printf("\n\nName of student%d is %s", i+1, s[i].name);
        printf("\nID of student%d is %d", i+1, s[i].stu_id);
        printf("\nAge of student%d is %d", i+1, s[i].age);
        printf("\nMarks of student%d is %f", i+1, s[i].marks);
    }
    

    return 0;
}
