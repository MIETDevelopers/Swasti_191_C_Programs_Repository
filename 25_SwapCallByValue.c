//A C Program to swap two numbers using call by value.              © Ishav Verma 20/March/2021
#include <stdio.h> 
  
int main() 
{ 
    int x, y; 
    scanf("%d", &x); 
    printf("Enter Value of x :%d\n",x); 
    scanf("%d", &y);
    printf("\nEnter Value of y:%d\n",y);  
    
    //Here swapping of number occurs.
    int temp = x; 
    x = y; 
    y = temp; 
  
    printf("\nAfter Swapping: x = %d, y = %d", x, y); 
    return 0; 
}
