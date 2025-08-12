/* Create an iterative function that returns the result of raising a number to a given
power. If the power is less than 0, the function should return 0.

Overflows do not need to be handled. By definition, 0 raised to the power of 0 should return 1. */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    int i = 0;
    int result = nb;
    while (i < power)
    {
      result = result * power;
      return result;
      i++;
    }
    return nb;
}

int main(void)
{
    int x = 3;
    int y = 5;

    ft_iterative_power(x, y);

    printf("%d", y);
}