#include <stdio.h>
#include <stdlib.h>
int* push(int *sp)
{
    scanf("%i", sp);
    sp++ ;
    return sp ;
}

int* pop(int *sp)
{
    sp-- ;
    *sp = 0 ;
    return sp;
}

void print(int stack[], int size)
{
    printf("Stack elements are: \n");
    for(int i=0; i<size;i++)
        printf("%i \n",stack[i]);

}
int main()
{
    int user_pick ;
    int stack[5]={0};
    int *sp;
    sp= &stack ;
    for(;;){
    printf("Choose \n 1- Push \n 2- Pop \n 3- Print stack \n");
    scanf("%i",&user_pick) ;
    if ( user_pick == 1)
    {
        sp=push(sp);
        printf("\n stack[0] %i \n stack[1] %i \n stack[2] %i \n", stack[0], stack[1], stack[2]) ;
    }
    if(user_pick==2)
    {
        sp=pop(sp);
        printf("\n stack[0] %i \n stack[1] %i \n stack[2] %i \n", stack[0], stack[1], stack[2]) ;
    }
    if(user_pick==3)
    {
        print(stack, 5);
    }
    }
    return 0;
}
