/* • Create a function that displays a string of characters on the standard output.
The function should be prototyped as follows: void ft_putstr(char *str);
*/

#include <unistd.h>

void ft_putstr(char *str)
{
   while (*str)
   {
   write(1, str, 1);
    str++;
   }
}

int main(void)
{
    ft_putstr("LifeUniverseEverything");

    return(0);
}