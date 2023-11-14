#include <stdio.h>
#include <string.h>

struct student {
    char student_id [11]; // Assuming 10 digits.
    char name [20];
    unsigned mark;
};

int main () {
    struct student new_student; 
    printf("Enter data: [Name, ID, Mark] ");
    scanf("%s %s %u", new_student.name, new_student.student_id, &new_student.mark);
    //strcpy(new_student.name, "Name Surname");
    //strcpy(new_student.student_id, "13902178");
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}