#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

void moose(int r, int l)
{
  if (r == l && r != 0 && l != 0){
    printf("Even %d\n", r + l);
  }
  else if (r < l){
    printf("Odd %d\n", l * 2);
  }
  else if (r > l){
    printf("Odd %d\n", r * 2);
  }
  else{
    printf("Not a moose\n");
  }
  
}


int main()
{
  int r;
  int l;
  scanf("%d %d", &r, &l);
  moose(r, l);
  return 0;
}
