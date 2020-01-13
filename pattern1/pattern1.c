#include <stdio.h>

int main()
{
    for(int row = 0; row<5; ++row)
    {
        for(int column =row; column<5; ++column)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
