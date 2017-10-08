#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int rtwo(int a, int b)
{
  if (a <= 1000 && a >= -1000 && b <= 1000 && b >= -1000)
    {
      int c = (2 * b) - a;
      printf("%d\n", c);
    }
  return false; 
}

int main()
{
  int a;
  int b;
  scanf("%d %d", &a, &b);
  rtwo(a, b);
  return 0;
}
