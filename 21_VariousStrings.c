//A C Program for showing working of string operation.

#include <stdio.h>
#include <string.h>
int main(){
    // String Declaration
    char name[30];

    //Console display using puts 
    puts("Enter your name:");

    //Input using gets
    gets(name);

    puts(name);
    // Printing string length using strlen 
    printf("Length of string name: %d", strlen(name));
    return 0;
}	

