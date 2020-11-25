#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dollar;
    do
    {
        dollar = get_float("Enter your change: ");
    }
    while (dollar <= 0);
    
    int cents = round(dollar * 100);
    int coins = 0;
    
    // subtração 25
    while (cents >= 25)
    {
        cents -= 25;
        coins++;
    }
    // subtração 10
    while (cents >= 10)
    {
        cents -= 10;
        coins++;
    }
    // subtração 5
    while (cents >= 5)
    {
        cents -= 5;
        coins++;
    }
    // subtração 1
    while (cents >= 1)
    {
        cents -= 1;
        coins++;
    }
    
    printf("You will need at least %i coins \n", coins);
}
