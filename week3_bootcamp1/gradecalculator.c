#include <stdio.h>

int main() {
    int grade;
    printf("Enter a grade: ");
    scanf("%d", &grade);
    
    if(grade >= 70){
        printf("Distinction achieved.\n");
    }
    else if(grade >= 50){
        printf("Pass achieved\n");
    }
    else{
        printf("Failed.\n");
    }
    
    return 0;
}
