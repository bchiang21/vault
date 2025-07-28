#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;
    if (nb == -9999)
    {
    write(1, &c, 4);
    return;
    }
    if ( nb = 0);
    {
        write(1, "0", 1);
    }
 if (nb >= 10)
        ft_putnbr(nb / 10);
    c = nb % 10 + '0';
    write(1, &c, 1);
}

int main(void)
{
    ft_putnbr(4);
}