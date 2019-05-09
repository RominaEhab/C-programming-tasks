#include <stdio.h>
#include <stdlib.h>

void flip(int x[5])
{
    int *ptr ;
    ptr = x;
    printf("\nThe flipped array is: \n") ;
    for(int i=4 ; i>=0 ; i--)
        printf("%i \n",ptr[i]);
     printf("\n") ;

}
int main()
{
    int x[5];
    for(;;){
    printf("Enter the array: \n");
    for(int i=0 ; i<5 ; i++)
        scanf("%i",&x[i]);
    flip(x);
    }
        return 0;
}
