/* Create a function ft_ultimate_div_mod with the following prototype:
void ft_ultimate_div_mod(int *a, int *b);

This function divides the value pointed to by ‘a’ by the value pointed to by ‘b’. The
result of the division is stored in the integer pointed to by ‘a’, while the remainder
is stored in the integer pointed to by ‘b

*/

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    div = (*a / *b);

    int mod;
    mod = (*a % *b);
    
    *a = div;
    *b = mod;

}

int main(void)
{
    int	x = 10;
    int	y = 5;

ft_ultimate_div_mod(&x, &y);

printf("%d, %d", x, y);

    return(0);

}