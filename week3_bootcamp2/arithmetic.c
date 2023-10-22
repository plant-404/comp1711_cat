#include <stdio.h>

float doArithmetic(float operand1, float operand2, char operator){
    switch(operator){
        case '/':
            return operand1 / operand2;
        case '*':
            return operand1 * operand2;
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        default:
            printf("No or invalid operator.\n");
            return 0.0;
    }
}

int main(){
    float operand1;
    float operand2;
    char operator;

    printf("Enter the first number: ");
    scanf("%f", &operand1);
    printf("Enter the second number: ");
    scanf("%f", &operand2);

    printf("Enter the operator (+,-,/,*): ");
    scanf(" %c", &operator);

    printf("Result of %f %c %f: %f\n", operand1, operator, operand2, doArithmetic(operand1,operand2,operator));

    return 0;
}