#include <stdio.h>
#include <stdlib.h>

int main()
{
    int noOfrows ;
    for(;;){
    printf("Enter number of lines: ");
    scanf("%i", &noOfrows);
    for (int row=1  ; row<= noOfrows ;row++)
    {
        for(int x=1 ; x<=(noOfrows-row) ; x++)
        {
            printf(" ") ;
        }
        for (int z=1; z<= ((row*2)-1); z++)
        {
            printf("*") ;
        }
        printf("\n") ;
    }
    }
    return 0;
}
