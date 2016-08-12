#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (int argc, char* argv[])
{
    //variable to hold the current letter
    char letter;
    //variable to help loop trough the string
    int i = 0;
    //control variable to outpu only the first letter of each name
    int ignore = 0;
    
    string name = GetString();

    while (i < strlen(name))
    {
        letter = name[i];
        if ((int)letter == 32)
        {
           ignore = 0;
           i++;
           letter = name[i];
        }
        if (ignore == 0)
        {
            if((int)letter >=97 && (int)letter <=122)
            {
                letter -= 32;
                //printf("%c", letter);
            }
            printf("%c", letter);

        }
        ignore++;
        i++;
    }
    printf("\n");

    
    
    //return 0;
}