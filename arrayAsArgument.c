#include <stdio.h>
const int M = 3;
const int N = 3;
//function decleration for 1-D array
void disp( char ch)
{
   printf("%c ", ch);
}
//function decleration for 2-D array
void print(int arr[M][N])
{
    int i, j;
    for (i = 0; i < M; i++)
      for (j = 0; j < N; j++)
        printf("%d ", arr[i][j]);
}
  
int main()	{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    char a[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    print(arr);
    printf("\n");
   for (int x=0; x<10; x++)
   {
       /* I’m passing each element one by one using subscript*/
       disp (a[x]);
   }
   return 0;
}