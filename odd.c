#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int odd (int n, int *x)
{
  if (n <= 20 && n >= 1)
    {

      //printf("%d\n", n);
      
      for (int i = 0; i < n; i++)
        {
          scanf("%d", x);
          if (*x <= 10 && *x >= -10)
            {
              if (*x % 2 == 0)
                {
                  printf("%d is even\n", *x);
                }
              else
                {
                  printf("%d is odd\n", *x);
                }
            }
        }
    }
  return 0;
}



int main()
{
  int n;
  int x;
  scanf("%d\n", &n);
  
  odd(n, &x);
  return 0;
}

