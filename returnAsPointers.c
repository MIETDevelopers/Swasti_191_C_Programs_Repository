#include<stdio.h>//Pre-processor directive to include standard input and output functions header file

int *abc(); //Function decleration which returns a pointer of type int

int main() {//Main function
    int *ptr;//Function calling
    ptr = abc();
    printf("ptr=%d",abc);
    return 0;
}
//Function defination
int *abc()
{
    int x = 100, *p;
    p = &x;
    return p;//Return statement
}