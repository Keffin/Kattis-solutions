#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int quad(int x, int y)
{
  if ((x!= 0 && x <= 1000 && x >= -1000) && (y!= 0 && y <= 1000 && y >= -1000))
    {
      if (x > 0 && y > 0)
        {
          printf("%d\n", 1);
        }
      if (x > 0 && y < 0)
        {
          printf("%d\n", 4);
        }
      if (x < 0 && y > 0)
        {
          printf("%d\n", 2);
        }
      if (x < 0 && y < 0)
        {
          printf("%d\n", 3);
        }  
    }
  return false;
}


int main()
{
  int x;
  int y;
  scanf("%d %d", &x, &y);
  quad(x, y);
  return 0;
}
