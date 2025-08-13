/* Create an iterative function that returns the result of raising a number to a given
power. If the power is less than 0, the function should return 0.

Overflows do not need to be handled. By definition, 0 raised to the power of 0 should return 1. */

#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    int result = 1;

    if (nb == 0 && power == 0)
    {
      return 1;
    }

   if (power < 0)
    {
      return 0;
    }

    while (power)
    {
      result = result * nb;
      power--;
    }
    return result;
}

int my_atoi(char *c)
{
  int i = 0;
  int result = 0;

  while (c[i])
  {
  result = (result * 10) + (c[i] - '0');
  i++;
  }
  return result;
}

int main(int argc, char** argv)
{
  int x;
  int y;
  int i = 0;

  if (argc != 3)
  {
    write(1, "oi, enter two values",20);
    return 0;
  }

  x = my_atoi(argv[1]);
  y = my_atoi(argv[2]);

  //int x = *argv[1] - '0';
  // int y = *argv[2] - '0';


    int final  = ft_iterative_power(x, y);

    printf("%i", final);
}