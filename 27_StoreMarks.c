//A C Program to store the information of student marks using structures and find total marks of individual student.

#include <stdio.h>
struct student      //Structure Datatype
//Memebers Or Fields Of Structure
{
    char name[20];
    int roll_no;
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float total_marks;
};
int main()      //Main Function Body
    {
    int n;      //Data and variable Declaration and Initialisation
    printf("Enter the number of students: \n");     //Print Function Calling
    scanf("%d",&n);     //Input Function
    struct student students[n];     //Struct Datatype
    printf("Enter student Details: \n");        //Print Function Calling

    for(int i=0; i<n; i++)  //Using For Loop
    {       
        printf("Student %d: \n",i+1);
        printf("Name: ");
        scanf("%s",students[i].name);
        printf("\nR0ll no: ");
        scanf("%d",&students[i].roll_no);
        printf("\nMarks of first subject: ");
        scanf("%f",&students[i].sub1);
        printf("\nMarks of second subject: ");
        scanf("%f",&students[i].sub2);
        printf("\nMarks of third subject: ");
        scanf("%f",&students[i].sub3);
        printf("\nMarks of fourth subject: ");
        scanf("%f",&students[i].sub4);
        printf("\n");
    }
    for(int i=0; i<n; i++)
    {
    students[i].total_marks=students[i].sub1+students[i].sub2+students[i].sub3+students[i].sub4;
    printf("Total Marks :%f\n",students[i].total_marks);
    }
    printf("Student Details: \n\n"); 
    for(int i=0; i<n; i++)      //Using For Loop For Individual Student
    {
        printf("Name: %s\n",students[i].name);
        printf("Rno: %d\n",students[i].roll_no);
        printf("First subject: %f\n",students[i].sub1);
        printf("Second subject: %f\n",students[i].sub2);
        printf("Third subject: %f\n",students[i].sub3);
        printf("Fourth subject: %f\n",students[i].sub4);
        printf("Total Marks : %.2f\n",students[i].total_marks);
        printf("\n");
    }
    return 0;
}
