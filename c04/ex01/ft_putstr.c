/* Create a function that prints a string of characters to the standard output.
The function should be prototyped as follows: void ft_putstr(char *str) */
#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

#include <stdio.h>


int main(void)
{
    char *x = "supercalifragilisticexpielidocious";

    ft_putstr(x);
}