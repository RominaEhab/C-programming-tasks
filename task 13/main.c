#include <stdio.h>
#include <stdlib.h>

int main()
{
    for(;;){
  int n, first = 0, second = 1, next, c;

  printf("Enter the number of terms: ");
  scanf("%i", &n);

  printf("Fibonacci series is:\n");

  for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = first + second;
      first = second;
      second = next;
    }
    printf("%i\n", next);
  }
    }
  return 0;
}
