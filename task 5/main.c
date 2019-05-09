#include <stdio.h>
#include <stdlib.h>

int main()
{
    int noOfrows ;
    for(;;){
    printf("Enter number of rows: ") ;
    scanf("%i", &noOfrows) ;
    for(int row=1 ; row<=noOfrows ; row++)
    {
        for(int x = 1 ;x<=((row*2)-1) ;x++)
        {
            printf("*") ;

        }
        printf("\n") ;
    }
    }
    return 0;
}
