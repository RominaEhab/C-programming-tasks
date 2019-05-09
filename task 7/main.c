#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y)
{
    int z=0;
    int *ptr1, *ptr2, *ptr3 ;
    ptr1 = &x;
    ptr2 = &y;
    ptr3 = &z ;
    *ptr3 = *ptr1;
    *ptr1 = *ptr2 ;
    *ptr2 = *ptr3 ;
    printf("After swapping \nThe first number is: %i \n", *ptr1);
    printf("The second number is: %i \n\n", *ptr2) ;

}
int main()
{
    for(;;){
    int x,y ;
    printf("Enter the first number: ") ;
    scanf("%i",&x) ;
    printf("Enter the second number: ") ;
    scanf("%i",&y) ;
    swap(x,y) ;
}
    return 0;
}
