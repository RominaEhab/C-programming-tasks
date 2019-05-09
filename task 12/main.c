#include <stdio.h>
#include <stdlib.h>
void battery_low()
{
    int x ;
    printf("Enter the battery current value: ");
    scanf("%i",&x);
    if ( x==10){
            printf("Battery Full , Please remove the battery \n") ;
    }
    else if (x>10)
        printf("Battery Motafagera Hazeeena \n") ;
    else if (x>=5 & x<=10)
        printf("Battery is normal \n");
    else if( x<5)
        printf("Battery low \n");

}

int main()
{
    for(;;){
    battery_low() ;
    }
    return 0;
}
