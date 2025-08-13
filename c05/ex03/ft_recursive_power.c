
#include <stdio.h>

// Power, but recursive.

int ft_recursive_power(int nb, int power)
{

if (power < 0)
{
    return 0;
}
if (power == 0)
{
    return 1;
}
    int result = ft_recursive_power(nb, power - 1);
        result = result * nb;
            return result ;
}

int main(void)
{

    int x = 2;
    int y = 5;

    

    int ans = ft_recursive_power(x, y);

    printf("%i", ans);

}