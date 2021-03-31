#include <stdio.h>//Pre-processor directive to include standard input and output functions header file

int main(){ //Main function
    int c, first, last, middle, n, search, array[100];

    //To print no. of elements of array 
    printf("Enter number of elements\n");
    scanf("%d", &n);

    //To print elements of array
    printf("Enter %d integers\n", n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    } 

    //To binary search the element
    printf("Enter value to find\n");
    scanf("%d", &search);

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    //To search thr location of element
    while (first <= last) 
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search) 
        {
            printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        else
        last = middle - 1;

        middle = (first + last)/2;
    } 
    if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

    return 0;
}