// A C Program demonstrating use of free() function.          

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char *str;

   // Initial memory allocation 
   str = (char *) malloc(15);
   strcpy(str, "Swasti");
   printf("String = %s,  Address = %u\n", str, str);

   // Reallocating memory 
   str = (char *) realloc(str, 25);
   strcat(str, "_191");
   printf("String = %s,  Address = %u\n", str, str);

   //Deallocate allocated memory 
   free(str);
   
   return(0);
}
