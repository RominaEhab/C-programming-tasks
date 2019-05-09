#include <stdio.h>
#include <stdlib.h>

void count(int number, int step){
for (int i=0 ; i<=number ; i++)
{
    if (i%step == 0)
        continue ;
    printf("%i \t", i);
}
}

int main()
{
    int x, y ;
    printf("Please enter The number: ") ;
    scanf("%i",&x) ;
    printf("\nPlease enter step value: ") ;
    scanf("%i", &y) ;
    printf("\nThe formula:\n");
    count(x,y) ;

        return 0;
}
