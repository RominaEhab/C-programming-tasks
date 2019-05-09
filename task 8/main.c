#include <stdio.h>
#include <stdlib.h>

void Array_Entry(int *ptr , int size)
{
    int a[50] ;
    ptr = a ;
    printf("Enter element:\n") ;
    for (int i=0 ; i<size ; i++)
        scanf("%i", &ptr[i]) ;
    printf("The array is : \n") ;
    for (int a=0 ; a<size ; a++)
            printf("%i \n", ptr[a]);
}
int main()
{
    int a ;
    int x[50] ;
    int *p;
    p=x ;
    for(;;){
    printf("Enter the size of the array: ");
    scanf("%i", &a);
    Array_Entry(p ,a) ;
    }
    return 0;
}
