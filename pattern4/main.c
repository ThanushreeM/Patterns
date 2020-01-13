#include <stdio.h>

int main()
{
    for(int row = 0; row<5; ++row)
    {
        for(int column = 0; column<5; ++column)
        {
            if(column < row)
            {
                printf(" ");
            }
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}
