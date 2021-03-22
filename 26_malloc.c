// A C Program demonstrating use of malloc() function.  

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
   char *str;

   // Initial memory allocation 
   str = (char *) malloc(15);
   strcpy(str, "Swasti");
   printf("String = %s,  Address = %u\n", str, str);

   // Reallocating memory 
   str = (char *) realloc(str, 25);
   strcat(str, "_Gupta");
   printf("String = %s,  Address = %u\n", str, str);

   free(str);
   
   return(0);
}