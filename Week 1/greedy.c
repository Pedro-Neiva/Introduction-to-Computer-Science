#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float realChange = 0.00;
    int coinsUsed = 0;
    int change = 0;

    do
    {
        printf("How much change is owed? \n");
        realChange = GetFloat();
    } while (realChange < 0);
    
  realChange = realChange * 100;
  change = round(realChange);

  while(change >= 25)
   {
       change = change - 25;
       coinsUsed++;
   }
   
   while(change >= 10)
   {
       change = change - 10;
       coinsUsed++;
   }
   
   while(change >= 5)
   {
       change = change - 5;
       coinsUsed++;
   }
   
   while(change >= 1)
   {
       change = change - 1;
       coinsUsed++;
   }
   
      printf("%i\n", coinsUsed);

    
}