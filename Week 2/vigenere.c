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
    
    for(int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        char plainLetter = argv[1][i];
        if(!isalpha(plainLetter))
        {
            printf("\n");
            return 1;
        }
    }
    
    string key = argv[1];
    
    for(int i = 0; key[i]; i++)
    {
        key[i] = tolower(key[i]);
    }
    
    string plainText = GetString();
    int j = 0;
    
    for(int i = 0, n = strlen(plainText); i < n; i++)
    {
        char plainLetter = plainText[i];
        char cipheredLetter = plainLetter;
        
        if(isalpha(plainLetter))
        {
            if(isupper(plainLetter))
            {
                cipheredLetter = (plainLetter + key[j % strlen(key)]) % 26;
                switch(cipheredLetter)
                {
                    case 0:
                        cipheredLetter = 'U';
                        break;
                    case 1:
                        cipheredLetter = 'V';
                        break;
                    case 2:
                        cipheredLetter = 'W';
                        break;
                    case 3:
                        cipheredLetter = 'X';
                        break;
                    case 4:
                        cipheredLetter = 'Y';
                        break;
                    case 5:
                        cipheredLetter = 'Z';
                        break;
                    case 6:
                        cipheredLetter = 'A';
                        break;
                    case 7:
                        cipheredLetter = 'B';
                        break;
                    case 8:
                        cipheredLetter = 'C';
                        break;
                    case 9:
                        cipheredLetter = 'D';
                        break;
                    case 10:
                        cipheredLetter = 'E';
                        break;
                    case 11:
                        cipheredLetter = 'F';
                        break;
                    case 12:
                        cipheredLetter = 'G';
                        break;
                    case 13:
                        cipheredLetter = 'H';
                        break;
                    case 14:
                        cipheredLetter = 'I';
                        break;
                    case 15:
                        cipheredLetter = 'J';
                        break;
                    case 16:
                        cipheredLetter = 'K';
                        break;
                    case 17:
                        cipheredLetter = 'L';
                        break;
                    case 18:
                        cipheredLetter = 'M';
                        break;
                    case 19:
                        cipheredLetter = 'N';
                        break;
                    case 20:
                        cipheredLetter = 'O';
                        break;
                    case 21:
                        cipheredLetter = 'P';
                        break;
                    case 22:
                        cipheredLetter = 'Q';
                        break;
                    case 23:
                        cipheredLetter = 'R';
                        break;
                    case 24:
                        cipheredLetter = 'S';
                        break;
                    case 25:
                        cipheredLetter = 'T';
                        break;
                
                    
                }
            }
            else
            {
                cipheredLetter = (plainLetter + key[j % strlen(key)]) % 26;
                switch(cipheredLetter)
                {
                    case 0:
                    cipheredLetter = 'o';
                    break;
                    case 1:
                    cipheredLetter = 'p';
                    break;
                    case 2:
                    cipheredLetter = 'q';
                    break;
                    case 3:
                    cipheredLetter = 'r';
                    break;
                    case 4:
                    cipheredLetter = 's';
                    break;
                    case 5:
                    cipheredLetter = 't';
                    break;
                    case 6:
                    cipheredLetter = 'u';
                    break;
                    case 7:
                    cipheredLetter = 'v';
                    break;
                    case 8:
                    cipheredLetter = 'w';
                    break;
                    case 9:
                    cipheredLetter = 'x';
                    break;
                    case 10:
                    cipheredLetter = 'y';
                    break;
                    case 11:
                    cipheredLetter = 'z';
                    break;
                    case 12:
                    cipheredLetter = 'a';
                    break;
                    case 13:
                    cipheredLetter = 'b';
                    break;
                    case 14:
                    cipheredLetter = 'c';
                    break;
                    case 15:
                    cipheredLetter = 'd';
                    break;
                    case 16:
                    cipheredLetter = 'e';
                    break;
                    case 17:
                    cipheredLetter = 'f';
                    break;
                    case 18:
                    cipheredLetter = 'g';
                    break;
                    case 19:
                    cipheredLetter = 'h';
                    break;
                    case 20:
                    cipheredLetter = 'i';
                    break;
                    case 21:
                    cipheredLetter = 'j';
                    break;
                    case 22:
                    cipheredLetter = 'k';
                    break;
                    case 23:
                    cipheredLetter = 'l';
                    break;
                    case 24:
                    cipheredLetter = 'm';
                    break;
                    case 25:
                    cipheredLetter = 'n';
                    break;
                    
                }
            }
            
            j++;
        }
        
        printf("%c", cipheredLetter);
    }
    
    printf("\n");
}

