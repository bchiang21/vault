
/*  Create an iterated function that returns a number. 
This number is the result of a factorial operation based on the number given as a parameter.
> If the argument is not valid the function should return 0.
> Overflows must not be handled, the function return will be undefined.
*/

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb)
{
    if (nb < 0)
    return 0;

    int i = 1;
    while (nb > 1)
    {
        i = i * nb;
        nb = nb - 1;
        printf("%i \n", i);
    }
    return i;
}

int main(int argc, char **argv)
{
    int x = 10;
    ft_iterative_factorial(x);

   /* if (argc != 2)
    {
        write(1, "0", 1);
        return 1;
    }

    int x = atoi(argv[1]);

    ft_iterative_factorial(x);
*/ 
}