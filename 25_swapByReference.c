//A C Program to swap two numbers using call by reference.       

#include <stdio.h>
//Function decleration
void swap(int*, int*);
 
int main(){
   int a, b;
   
   scanf("%d%d",&a,&b);
   printf("Enter the value of a and b:%d %d\n", a, b);
    
   printf("Before Swapping\na = %d\nb = %d\n", a, b);
   //Function calling
   swap(&a, &b); 
 
   printf("After Swapping\na = %d\nb = %d\n", a, b);
 
   return 0;
}
//Function defination 
void swap(int *x, int *y)
{
   int temp;
   // Here swapping occurs.
   temp = *x;
   *x = *y;
   *y = temp;   
}