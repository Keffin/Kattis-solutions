#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


void nasty(int r, int e, int c)
{     
  if (r + c < e)
    {
      printf("Advertise\n");
    }
  if (r + c == e)
    {
      printf("Does not matter \n");
    }
  if (r + c > e)
    {
      printf("Do not advertise\n");
    }
}



int main()
{
  int n;
  int r;
  int e;
  int c;
  scanf("%d", &n);
  for (int i = 0; i < n;i++)
    {
      scanf("%d %d %d", &r, &e, &c);
      nasty(r, e, c);
    }
  return 0;
}
