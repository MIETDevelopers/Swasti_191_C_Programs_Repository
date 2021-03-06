//A C Program to print factorial using recursion.	 	

#include<stdio.h>
//Function decleration
int factorial(int n);
int main(){
    int num, fact;
    //Ask user for the input and store it in num
    scanf("%d",&num);
    printf("\nEnter any integer number:%d",num);

    //Calling our user defined function
    fact =factorial(num);
 
    //Displaying factorial of input number
    printf("\nfactorial of %d is: %d",num, fact);
    return 0;
}
//Function defination
int factorial(int n)
{
    //Factorial of 0 is 1 
    if(n==0)
        return(1);
    else   
        //Function calling itself: recursion
        return(n*factorial(n-1));
}
