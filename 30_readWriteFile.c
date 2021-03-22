//A C Program to read and write in a file

#include <stdio.h>
int main()
{
    char ch;

    /* Pointer for both the file*/
    FILE *fpr, *fpw;
    /* Opening file FILE.C in “r” mode for reading */
    fpr = fopen("D:\\cprogram\\file.txt", "r");

    /* Ensure FILE1.C opened successfully*/
    if (fpr == NULL)
    {
         puts("Input file cannot be opened");
    }

    /* Opening file FILE2.C in “w” mode for writing*/
    fpw= fopen("D:\\cprogram\\file1.txt", "w");

    /* Ensure FILE2.C opened successfully*/
    if (fpw == NULL)
    {
       puts("Output file cannot be opened");
    }

    /*Read & Write Logic*/
    while(1)
    {
        ch = fgetc(fpr);
        if (ch==EOF)
            break;
        else
            fputc(ch, fpw);
    }

    /* Closing both the files */
    fclose(fpr);
    fclose(fpw);

    return 0;
}