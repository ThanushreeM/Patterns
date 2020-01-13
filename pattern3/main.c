#include <stdio.h>

int main()
{

   for(int row = 1;row <= 5; ++row)
   {
       for(int column = 1;column <= 5; ++column)
       {
           if(column >= 5-(row-1) && column <= 5+(row-1))
           {
               printf("* ");
           }
           else
            printf(" ");
       }
       printf("\n");
   }
    return 0;
}
