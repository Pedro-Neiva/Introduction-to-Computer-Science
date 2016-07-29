#include <stdio.h>
#include <cs50.h>

int main (void)
{
    printf("Please enter the duration of your shower in minutes: \n");
    int duration = GetInt();
    int water = 12 * duration;
    printf("bottles: %i", water);
}