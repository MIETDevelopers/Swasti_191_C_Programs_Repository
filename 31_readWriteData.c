//A C program for reading and writing the student marks data to files.				

#include <stdio.h>
#include <stdlib.h>
int main() {
	char stu_name[50];
	int stu_marks,i,n;
	printf("Enter number of students: ");
	scanf("%d",&n);
	FILE *fptr;
	fptr=(fopen("D:\\cprogram\\file.txt", "r"));
	if(fptr==NULL) 
	{
		printf("Error!");
		exit(1);
	}
	for (i=0;i<n;++i) 
	{
		printf("For student%d\n ",i+1);
		printf("Enter student Name: %s\n",stu_name);
		scanf("%s",&stu_name);
		printf("Enter marks: %d\n",stu_marks);
		scanf("%d",&stu_marks);
		fprintf(fptr,"\nName: %s \nMarks=%d \n",stu_name,stu_marks);
	}
	fclose(fptr);
	return 0;
}