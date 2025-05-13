#include <math.h>
#include <stdexcept>

/**
  metodo para realizar multiplicaciones de dos numeros
 */
double multiply(int x, int y)
{
    if (x == 0 || y == 0)
        return 0;
    else
        return x * y;
}
