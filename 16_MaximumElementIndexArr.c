//To Find Max Element and Index In An Array
#include<stdio.h>
int main(){
	int a, imax;
	float arr[4], max;

	printf("Please enter five numbers:\n ");

	for (a = 0; a < 4; ++a)
	{

    	scanf("%f", &arr[a]);
	}
	max  = arr[0];//start off assuming that the 1st element is the max
	for (a = 0; a < 4; a++)//now compare it with the rest of the array, updataing the max all along
	{
    	if (arr[a] > max)
    	{
        	max = arr[a];
        	imax = a;
        }	
	}
	printf("Largest element at index %d= %.2f ", imax, max);

	return 0;
}
