#include <stdio.h>
#include <stdlib.h>

int calculator(int choice, int x, int y)
{
    int z ;
    if (choice== 1)
    {
        z=x+y ;
    }
    else if (choice==2)
    {
        z=x-y ;
    }
    else if (choice == 3)
    {
        z=x*y ;
    }
    return z;
}

void CinemaTicket(int choice)
{
    if (choice== 1)
    {
            printf("normal ticket 50 LE \n") ;
    }
    else if (choice==2)
    {
            printf("vip ticket \n") ;

    }
    else if (choice == 3)
    {
            printf("vip + pop corn \n") ;

    }
}
int main()
{
    for(;;){
    int pick ;
    printf("Press 1 for the calculator \nPress 2 for cinema ticket \n");
    scanf("%i",&pick);
    if (pick == 1)
    {
        int x, y, z, choice;
        printf("\nPress 1 for addition \nPress 2 for subtrction \nPress 3 for multiplication \n") ;
        scanf("%i", &choice) ;
        printf("Enter first number: ");
        scanf("%i", &x) ;
        printf("Enter second number: ");
        scanf("%i", &y) ;
        printf("The result is: %i \n", calculator(choice,x,y)) ;
    }
    else if (pick== 2)
    {
        int ticket ;
        printf("\nChoose your cinema ticket from 1 to 3: ");
        scanf("%i", &ticket) ;
        CinemaTicket(ticket) ;

    }
    }
    return 0;
}
