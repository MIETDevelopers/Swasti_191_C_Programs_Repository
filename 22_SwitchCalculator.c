//A C program to create Simple Calculator using switch case and function for every operation
#include<stdio.h>
int main(){
    char operation;
    float a, b;
    scanf("%c", &operation); //It will scan the operater entered by user.
    printf("Enter an operation (+, -, *, /):%c\n",operation); //It will print the operater to be entered by user.
    scanf("%f %f",&a, &b); //It will scan the numbers entered by user.
    printf("Enter two operands: %f %f\n",a,b);
    switch(operation)
    {
        case '+':
            printf("%.2f + %.2f = %.2f",a, b, a+b); //Addition Function
            break;

        case '-':
            printf("%.2f - %.2f = %.2f",a, b, a-b); //Subtraction Function
            break;

        case '*':
            printf("%.2f * %.2f = %.2f",a, b, a*b); //Multiplication Function
            break;

        case '/':
            printf("%.2f / %.2f = %.2f",a, b, a/b); //Division Function
        break;
        // operator doesn't match any case constant
        default:
            printf("Error encountered by the input values");
    }
    return 0;
}
