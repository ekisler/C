/* prog13.c -- Muestra valores de algunos constantes en limit.h y float.h */

#include <stdio.h>
#include <limits.h>    // integer limites
#include <float.h>     // floating-point limites

int main( void )
{
  printf( "\nAlgunos límites de números de un sistema de 32-bits:\n" );
  printf( "Un byte = %d bits en este sistema.\n"
          "char mínimo: %hd y char máximo: %hd\n"
          "signed char mínimo: %hd y signed char máximo: %hd\n"
          "unsigned char mínimo: 0 y unsigned char máximo: %hd\n\n"
          "short mínimo: %hd y short máximo: %hd\n"
          "unsigned short mínimo: 0 y usigned short máximo: %hu\n\n"
          "int mínimo: %d e int máximo: %d\n"
          "unsigned int mínimo: 0 y usigned int máximo: %u\n\n"
          "long mínimo: %ld y long máximo: %ld\n"
          "unsigned long mínimo: 0 y usigned long máximo: %lu\n\n"
          "long long mínimo: %lld y long long máximo: %lld\n"
          "unsigned long long mínimo: 0 y unsigned long long máximo: %llu\n\n",
           CHAR_BIT, CHAR_MIN, CHAR_MAX, SCHAR_MIN, SCHAR_MAX, UCHAR_MAX,
           SHRT_MIN, SHRT_MAX, USHRT_MAX, INT_MIN, INT_MAX, UINT_MAX, LONG_MIN,
           LONG_MAX, ULONG_MAX, LLONG_MIN, LLONG_MAX, ULLONG_MAX );

  printf( "Número de digitos en la mantisa de un float: %hd\n"
          "Mínimo número de dígitos significativos de un float: %hd\n"
          "Mínimo exponente de base 10 de un float\n"
          "con dígitos significativos completos %hd\n"
          "Máximo exponente de base 10 de un float: %hd\n\n"
          "Mínimo float normal: %e y Máximo float normal: %e\n\n"
          "float epsilon = %e\n\n",
           FLT_MANT_DIG, FLT_DIG, FLT_MIN_10_EXP, FLT_MAX_10_EXP, FLT_MIN, 
           FLT_MAX, FLT_EPSILON );

  return 0;
}