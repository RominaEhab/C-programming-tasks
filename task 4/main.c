#include <stdio.h>
#include <stdlib.h>

int power(int x)
{
    int z=1 ;
    for(int i=0 ;i<x ; i++){
        z= z*x ;
    }
    return z;
}
int main()
{
    for(;;){
    int number ;
    printf("Please enter your number: ");
    scanf("%i", &number) ;
    printf("The result is: %i \n\n", power(number));
    }
    return 0;
}
