// a program that read a value between 1 and 8, than print a # piramid with this value
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    do
    {
        // get value
        h = get_int("Height: ");
    }
    while (h < 1 || h > 8);
    //add rows
    for (int r = 0; r < h; r++)
    {
        //add columns
        for (int c = 0; c < h; c++)
        {
            //print spaces
            if (r + c < h - 1)
            {
                printf(" ");
            }
            else
                //print #
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
