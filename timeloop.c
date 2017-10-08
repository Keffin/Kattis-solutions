#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


char timeloop(int n)
{
  if (n <= 100 && n >= 1)
    {
      int i = 1;
      while (i <= n)
        {
          printf("%d Abracadabra\n", i);
          i++;
          
        }
    }
  return 0;
}

int main()
{
  int n;
  scanf("%d", &n);
  timeloop(n);
}

