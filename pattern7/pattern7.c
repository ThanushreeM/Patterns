#include <stdio.h>
#define MAX 10

int main()
{
    int row , column;

   for(row = 1; row <= 9; ++row)
   {
       for(column = 9; column >= 1; --column)
       {
           if (column == row || column == (MAX - row))
           {
               printf("* ");
           }
           else
            printf("  ");
       }
       printf("\n");
   }
    return 0;
}
