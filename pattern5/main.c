#include <stdio.h>

int main()
{
    int row,column;

    for(row = 1;row <= 5; ++row)
   {
       for(column = 1;column <= 5; ++column)
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

    for(row = 0; row<4; ++row)
    {
        for(column = 0; column<4; ++column)
        {
            if(column < row)
            {
                printf(" ");
            }
            else
                printf(" *");
        }
        printf("\n");
    }

    return 0;
}

