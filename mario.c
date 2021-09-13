#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    //prompting user input.
    do
    {
        h= get_int("height: ");
    }
    while(h<1 || h>8);
    for(int i=0;i<h; i++)
    {
        for(int space=0; space<h-i-1; space++)
        {
            printf(" ");
        }
        for (int hash=0;hash<i+1;hash++)
        {
            printf("#"); 
        }
        printf("  ");
    
        for(int hash=0;hash<i+1;hash++)
        {
            printf("#"); 
        }
    printf("\n");
    }
 }