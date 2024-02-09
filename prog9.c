/* prog9.c -- floats, doubles y print() */

#include <stdio.h>

int main (void)
{
  float Float = 32000.3;
  double Doble = 2.14e9;
  long double LongDouble = 5.32-5;

  printf( "%f puede escribirse como %e\n", Float, Float);
  printf("%f puede escribirse como %e\n", Doble, Doble);
  printf("%Lf puede escribirse como %Le\n", LongDouble, LongDouble);

return 0;
}