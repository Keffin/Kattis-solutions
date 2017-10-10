#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long a_real(long n)
{
  return printf("%.6f\n", (sqrt(n) * 4));
}

int main()
{
  long n;
  scanf("%ld", &n);
  a_real(n);
  return 0;
}
