#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        // Ask for user how high will be the pyramid
        height = get_int("Height: ");
    
    }
    while (height < 1 || height > 8);
    
    for (int i = 1; i <= height; i++)
    {
        // Left side of the pyramid
        int j = 0;
        while (j < height - i)
        {
            printf(" ");
            j++;
        }
        j = 0;
        while (j < i - 1)
        {
            printf("#");
            j++;
        }
        
        // Middle of the pyramid
        printf("#  #");
        
        // Right side of the pyramid
        j = 0;
        while (j < i - 1)
        {
            printf("#");
            j++;
        }
        printf("\n");
    }
}