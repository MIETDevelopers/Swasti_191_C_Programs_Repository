#include <stdio.h> //Pre-processor directive to include standard input and output functions header file
int max(int a, int b, int c);
int main(){    //Main function
	int x,y,z, result;
	printf("Enter 3 numbers: \n");
    result= max(x,y,z);
	return 0;    //Return function
} 
int max(int x, int y, int z)
{
	int n, max=0; 
	for(int i=0; i<3; i++)	 //For loop to take and store the largest number
    {
    	scanf("%d", &n);
		if(n > max)
			max = n;
	}
 	printf("The largest number is: %d", max);   //For printing the maximum number
}
