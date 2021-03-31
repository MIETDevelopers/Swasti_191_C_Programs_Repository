#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int prime(int a);
int main(){    //Main function
    int n ,res;
    printf("Enter number to check prime number or not. \n");
    scanf("%d",&n);
    res =prime(n);
 
    return 0;
}
int prime(int n)
{
    int i, c=0;

    i=2;
    while( i<=n/2)
    {
        // check for non prime number
        if(n%i==0)
        {
            c=1;
            break;
        }
        i++;
    }
 
    if (c==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
}
