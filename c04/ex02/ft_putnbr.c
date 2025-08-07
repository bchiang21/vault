#include <unistd.h>

/* Create a function that displays the number passed as a parameter. The function
must be able to handle all possible values of the int type.
The function should be prototyped as follows: void ft_putnbr(int nb);
*/

void ft_putnbr(int nb)
{
    char c;

    if (nb = -9223372036854775807);
    {
       write(1, "-9223372036854775807", 19);
       return;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb <= 10)
    {
        ft_putnbr(nb/10);
        c = '0' + (nb%10);
        write(1, &c, 10);
    }

}

int main(void)
{
    int x = 9223372036854775807;
    int y = -9223372036854775807;

    ft_putnbr(x);
    ft_putnbr(y);
}