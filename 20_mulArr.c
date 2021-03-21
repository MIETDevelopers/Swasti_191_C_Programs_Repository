// multiplication of array
  
#include<stdio.h>     //Preprocessor to include the standard input and output funtions
int main(){           //main function
	int a[20][20], b[20][02], mul[20][20], r,c,i,j,k;
	scanf("%d",&r);   
	printf("enter the number of row=%d\n",r); 
	scanf("%d",&c);       
	printf("enter the number of column=%d\n",c);     
	//Printing first matrix
	printf("first matrix:\n");
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			scanf("%d",&a[i][j]);   
			printf("enter the first a[%d][%d] matrix element=%d\n",i,j,a[i][j]);   
		} 	 
	}
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    
		{    
			printf("%d\t",a[i][j]);    
		}
			printf("\n");  
	}		
	//printing second matrix 
	printf("second matrix:\n");    
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    //for loop
		{    
			scanf("%d",&b[i][j]);  
			printf("enter the second b[%d][%d] matrix element=%d\n",i,j,b[i][j]);     
		}  
	} 
	for(i=0;i<r;i++)    
	{    
		for(j=0;j<c;j++)    //for loop
		{    
			printf("%d\t",b[i][j]);     
		}  
			printf("\n");  
	}       
  	//printing multiplication of matrix 
	printf("multiply of the matrix=\n"); 
	for(i=0;i<r;i++)    //for loop
	{    
		for(j=0;j<c;j++)    //for loop
		{   
			mul[i][j]=0;    
			for(k=0;k<c;k++)    
			{    
				mul[i][j]+=a[i][k]*b[k][j];    
			}    
		}    
	}    
	//for printing result    
	for(i=0;i<r;i++)    // for loop
	{    
		for(j=0;j<c;j++)    //for loop
		{    
			printf("%d\t",mul[i][j]);    
		}    
			printf("\n");    //printing
	}    
	return 0;  //end of code
}  