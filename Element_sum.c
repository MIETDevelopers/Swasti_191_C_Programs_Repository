//A C Program to find sum of all elements of array.
#include <stdio.h>//Pre-processor directive to include standard input and output functions header file
#define MAX_SIZE 100

int main()  {//Main function
        int i, n, sum=0, arr[MAX_SIZE];

    //Input size of the array
    scanf("%d", &n);
    printf("Enter size of the array: %d\n",n);

    //Input elements in array
    printf("Enter %d elements in the array: \n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        printf("%d\n", arr[i]);
    }

    //Add each array element to sum
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    //To print sum of elements
    printf("Sum of all elements of array = %d", sum);

    return 0;//Return statement
}