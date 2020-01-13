#include <stdio.h>

int main()
{
    int row = 0 , column = 0;

    for(row = 1 ; row <= 5 ; ++row)
    {
        for( column = 1; column <= row ; ++column)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(row = 1 ; row <= 4; ++row)
    {
        for(column = row ; column <= 4 ; ++column)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
