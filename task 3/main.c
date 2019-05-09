#include <stdio.h>
#include <stdlib.h>

void adv_calculator(int user_pick){
    int choice ;
    if (user_pick == 1)
    {
        printf("\nPress 1 for addition \nPress 2 for subtrction \nPress 3 for multiplication \n") ;
        scanf("%i", &choice) ;

        int x, y, z;
        printf("Enter first number: ");
        scanf("%i", &x) ;
        printf("Enter second number: ");
        scanf("%i", &y) ;

        if(choice == 1)
        {
            z=x+y ;
        }
        else if (choice == 2)
        {
            z=x-y ;
        }
        else if (choice == 3)
        {
            z=x*y ;
        }

        printf("The result is: %i \n", z);

    }
    else if (user_pick == 2)
    {
        printf("\nChoose your cinema ticket from 1 to 3: ");
        scanf("%i", &choice) ;
        if(choice == 1)
        {
            printf("normal ticket 50 LE \n") ;
        }
        else if (choice == 2)
        {
            printf("vip ticket \n") ;
        }
        else if (choice == 3)
        {
            printf("vip + pop corn \n") ;
        }

    }

}

int main()
{
    for(;;){
    int pick ;
    printf("Press 1 for the calculator \nPress 2 for cinema ticket \n");
    scanf("%i",&pick);
    adv_calculator(pick);
    }
    return 0;
}
