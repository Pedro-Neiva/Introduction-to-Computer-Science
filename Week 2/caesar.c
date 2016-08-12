#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        printf("\n");
        return 1;
    }
    
    int key = atoi(argv[1]);
    string plainText = GetString();
    char plainLetter = 'a';
    char cipheredLetter = 'a';
    
    for(int i = 0, n = strlen(plainText); i < n; i++)
    {
        plainLetter = plainText[i];
        cipheredLetter = plainLetter;
        
        if(isupper(plainLetter))
        {
            cipheredLetter = (plainLetter + key) % 26;
            
            switch(cipheredLetter)
            {
                case 0:
                    cipheredLetter = 'N';
                    break;
                case 1:
                    cipheredLetter = 'O';
                    break;
                case 2:
                    cipheredLetter = 'P';
                    break;
                case 3:
                    cipheredLetter = 'Q';
                    break;
                case 4:
                    cipheredLetter = 'R';
                    break;
                case 5:
                    cipheredLetter = 'S';
                    break;
                case 6:
                    cipheredLetter = 'T';
                    break;
                case 7:
                    cipheredLetter = 'U';
                    break;
                case 8:
                    cipheredLetter = 'V';
                    break;
                case 9:
                    cipheredLetter = 'W';
                    break;
                case 10:
                    cipheredLetter = 'X';
                    break;
                case 11:
                    cipheredLetter = 'Y';
                    break;
                case 12:
                    cipheredLetter = 'Z';
                    break;
                case 13:
                    cipheredLetter = 'A';
                    break;
                case 14:
                    cipheredLetter = 'B';
                    break;
                case 15:
                    cipheredLetter = 'C';
                    break;
                case 16:
                    cipheredLetter = 'D';
                    break;
                case 17:
                    cipheredLetter = 'E';
                    break;
                case 18:
                    cipheredLetter = 'F';
                    break;
                case 19:
                    cipheredLetter = 'G';
                    break;
                case 20:
                    cipheredLetter = 'H';
                    break;
                case 21:
                    cipheredLetter = 'I';
                    break;
                case 22:
                    cipheredLetter = 'J';
                    break;
                case 23:
                    cipheredLetter = 'K';
                    break;
                case 24:
                    cipheredLetter = 'L';
                    break;
                case 25:
                    cipheredLetter = 'M';
                    break;
                
            }
            
        }
        else if (islower(plainLetter))
        {
            cipheredLetter = (plainLetter + key) % 26;
        }
        
        switch(cipheredLetter)
        {
            case 0:
                cipheredLetter = 'h';
                break;
            case 1:
                cipheredLetter = 'i';
                break;
            case 2:
                cipheredLetter = 'j';
                break;
            case 3:
                cipheredLetter = 'k';
                break;
            case 4:
                cipheredLetter = 'l';
                break;
            case 5:
                cipheredLetter = 'm';
                break;
            case 6:
                cipheredLetter = 'n';
                break;
            case 7:
                cipheredLetter = 'o';
                break;
            case 8:
                cipheredLetter = 'p';
                break;
            case 9:
                cipheredLetter = 'q';
                break;
            case 10:
                cipheredLetter = 'r';
                break;
            case 11:
                cipheredLetter = 's';
                break;
            case 12:
                cipheredLetter = 't';
                break;
            case 13:
                cipheredLetter = 'u';
                break;
            case 14:
                cipheredLetter = 'v';
                break;
            case 15:
                cipheredLetter = 'w';
                break;
            case 16:
                cipheredLetter = 'x';
                break;
            case 17:
                cipheredLetter = 'y';
                break;
            case 18:
                cipheredLetter = 'z';
                break;
            case 19:
                cipheredLetter = 'a';
                break;
            case 20:
                cipheredLetter = 'b';
                break;
            case 21:
                cipheredLetter = 'c';
                break;
            case 22:
                cipheredLetter = 'd';
                break;
            case 23:
                cipheredLetter = 'e';
                break;
            case 24:
                cipheredLetter = 'f';
                break;
            case 25:
                cipheredLetter = 'g';
                break;
        }
        
        printf("%c", cipheredLetter);
    }
    
    printf("\n");
    return 0;
}