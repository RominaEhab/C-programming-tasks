#include <stdio.h>
#include <stdlib.h>

void count(int number, int skipped){
for (int i=0 ; i<=number ; i++)
{
    if (i%skipped == 0)
        continue ;
    printf("%i \t", i);
}
}

int main()
{
    int x, y ;
    printf("Please enter The number: ") ;
    scanf("%i",&x) ;
    printf("\nPlease enter skipped number: ") ;
    scanf("%i", &y) ;
    printf("\nThe formula:\n");
    count(x,y) ;

        return 0;
}
