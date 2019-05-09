#include <stdio.h>
#include <stdlib.h>

void swapV(int x, int y)
{
        printf("Enter the first number: ") ;
        scanf("%i",&x) ;
        printf("Enter the second number: ") ;
        scanf("%i",&y) ;
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

void swapArr(int a[5], int b[5])
{
        printf("Enter the first array: \n") ;
        for(int i=0 ; i<5 ; i++)
        scanf("%i",&a[i]) ;
        printf("Enter the second array: \n") ;
        for( int a=0 ; a<5 ; a++)
        scanf("%i",&b[a]) ;
        int z[5]={0};
        int *ptr1, *ptr2, *ptr3 ;
        ptr1 = a;
        ptr2 = b;
        ptr3 = z ;
        ptr3 = ptr1;
        ptr1 = ptr2 ;
        ptr2 = ptr3 ;
        printf("\nAfter swapping \nThe first array is: \n");
        for(int i=0 ; i<5 ; i++){
                printf("%i \n" ,ptr1[i]) ;

        }
        printf("The second array is: \n") ;
        for( int a=0 ; a<5 ; a++){
                printf("%i \n",ptr2[a]) ;
        }
        printf("\n");


}
void flipp(int x[5])
{
        printf("Enter the array: \n");
        for(int i=0 ; i<5 ; i++)
            scanf("%i",&x[i]);
        int *ptr ;
        ptr = x;
        printf("\nThe flipped array is: \n") ;
        for(int i=4 ; i>=0 ; i--)
            printf("%i \n",ptr[i]);
        printf("\n") ;
}
void func(int user_pick)
{
    if( user_pick == 1)
    {
        int a, b;
        swapV(a,b);

    }
    else if (user_pick==2)
    {
        int x[5], y[5] ;
        swapArr(x,y);

    }
    else if (user_pick==3)
    {
        int a[5];
        flipp(a);

    }
}
int main()
{
    int no ;
    for(;;){
    printf("Choose: \n 1- Swap 2 variables \n 2- Swap 2 arrays \n 3- Flip an array \n");
    scanf("%i", &no) ;
    func(no) ;
    }
    return 0;
}
