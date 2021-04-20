#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float change;
    int cents;
    int numberofChanges = 0;
    
    do
    {
        change = get_float("Change owed: ");
    }
    while (change <= 0.00);
    
    cents = round(change * 100);
    
    // Checks whether the cent is bigger than 25, 10, 5 or 1 successively.
    
    while (cents >= 25)
    {
        numberofChanges++;
        cents -= 25;
    }
    
    while (cents >= 10)
    {
        numberofChanges++;
        cents -= 10;
    }
    
    while (cents >= 5)
    {
        numberofChanges++;
        cents -= 5;
    }
    
    while (cents >= 1)
    {
        numberofChanges++;
        cents -= 1;
    }
    
    printf("%i \n", numberofChanges);
}
