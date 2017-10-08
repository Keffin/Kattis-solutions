#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void fizzbuzz(int x, int y, int z)
{
  if (z % x == 0 && z % y == 0)
    {
      printf("Fizzbuzz\n");
    }
  else if (z % x == 0)
    {
      printf("Fizz\n");
    }
  else if (z % y == 0)
    {
      printf("Buzz\n");
    }
  else
    {
      printf("%d\n", z);
    }
}


int main()
{
 
  int num;
  int x;
  int y; 

  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &num);
 
  for (int i = 1; i <= num; i++)
    {      
      fizzbuzz(x, y, i);
    }
  return 0;
}
