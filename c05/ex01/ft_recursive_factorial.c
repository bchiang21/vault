
// Factorial, but this time recursive

#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb == 1 || nb == 0)
   {
    return 1;
   }

   int sub = ft_recursive_factorial(nb -1);
   int result = nb * sub;
   printf("%d!= %d\n", nb, result);

   return result;
}

int main(void)
{
    int x = 5;
    
    ft_recursive_factorial(x);

}
