/*  Prog10.c -- Imprimir tamaños de tipos de variables */

#include <stdio.h>

int main( void )
{
  /* c99 nos da el %zd especificador de conversión para los tamaños */

  printf( "En un sistema de 32 bits:\n" );
  printf( "Tipo char tiene un tamaño de %u bytes.\n", sizeof(char) );
  printf( "Tipo char tiene un tamaño de %zd bytes.\n", sizeof(char) );
  printf( "Tipo short tiene un tamaño de %u bytes.\n", sizeof(short) );
  printf( "Tipo short tiene un tamaño de %zd bytes.\n", sizeof(short) );
  printf( "Tipo int tiene un tamaño de %u bytes.\n", sizeof(int) );
  printf( "Tipo int tiene un tamaño de %zd bytes.\n", sizeof(int) );
  printf( "Tipo long tiene un tamaño de %u bytes.\n", sizeof(long) );
  printf( "Tipo long tiene un tamaño de %zd bytes.\n", sizeof(long) );
  printf( "Tipo long long tiene un tamaño de %u bytes.\n", sizeof(long long) );
  printf( "Tipo long long tiene un tamaño de %zd bytes.\n", sizeof(long long) );
  printf( "Tipo float tiene un tamaño de %u bytes.\n", sizeof(float) );
  printf( "Tipo float tiene un tamaño de %u bytes.\n", sizeof(float) );
  printf( "Tipo double tiene un tamaño de %u bytes.\n", sizeof(double) );
  printf( "Tipo double tiene un tamaño de %zd bytes.\n", sizeof(double) );
  printf( "Tipo long double tiene un tamaño de %u bytes.\n",
                                        sizeof(long double) );
  printf( "Tipo long double tiene un tamaño de %zd bytes.\n",
                                         sizeof(long double) );

  return 0;
}