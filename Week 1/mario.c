#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height;
    int spaces;
    int hashes = 2;
    
    do 
    {
        printf("Please enter a height no greater than 23: \n");
        height = GetInt();
    } while (height < 0 || height > 23);
        
        for (int i = 0; i < height; i++)
        {
            spaces = height - i - 1;
            for (int j = 0; j < spaces; j++)
            {
                printf(" ");
            }
            
            hashes = 2 + i;
            for (int k = 0; k < hashes; k++)
            {
                printf("#");
            }
            
            printf("\n");
        }
    
}