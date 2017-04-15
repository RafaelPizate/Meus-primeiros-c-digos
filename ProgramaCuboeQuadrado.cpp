
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  int main(void)
  {
      int num, quadrado, cubo;
      float raiz_quad, raiz_cub;

      printf ("Entre com um numero positivo e maior que zero: ");
      scanf ("%d", &num);

      if (num > 0)
      {
          quadrado = pow(num, 2);
          cubo = pow(num, 3);
          raiz_quad = sqrt(num);
          raiz_cub = pow(num, 1.0/3.0);

          printf ("O numero digitado foi: %d.\n", num);
          printf ("O numero ao quadrado e: %d\n", quadrado);
          printf ("A raiz de %d e: %.2f\n", num, raiz_quad);
          printf ("A raiz cubica de %d e: %.2f\n", num, raiz_cub);

          return (0);
      }
  }

