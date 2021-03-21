// A C Program to search an element in the array based on user choice.        

#include <stdio.h>
int main(){  
    int n, i,  num, found = 0;
 
    scanf("%d",&n);
    printf("How many numbers u are going to enter?:%d\n ",n);//This will set the maximum number (Limit) of values to be entered by user based on their choice.
    int array[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
        printf("Enter %d element:%d\n",i,array[i]);
    }
   // This loop would store the input numbers in array
    scanf("%d", &num);
    printf("Enter the element to be searched:%d\n",num);
    // This step will determine Linear search.
    for (i = 0; i < n ; i++)
    {
        if (num == array[i] )
        {
            found = 1;
            break;
        }
    }
    //This will give the output based on user input.
    if (found == 1) 
        printf("Element is present in the array at position %d .",i+1);
    else
        printf("Element is not present in the array.\n");
        return 0;
}