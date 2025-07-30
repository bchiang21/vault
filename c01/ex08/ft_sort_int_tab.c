/* Create a function that sorts an array of integers in ascending order.
The function takes two arguments: a pointer to an int and the number of elements
in the array. The function should be prototyped as follows:
void ft_sort_int_tab(int *tab, int size);
*/
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
int i, temp;
int sorted = 0;

while (!sorted)
{
    sorted = 1;
    i = 0;
    while (i < size - 1)    
    {
    if (tab[i] > tab[i +1])
    {
        temp = tab[i];
        tab[i] = tab[i + 1];
        tab[i+ 1] = temp;
        sorted = 0;
    }
    i++;
}   
}
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n >= 10)
    {
        ft_putnbr(n / 10);
    }
ft_putchar(n % 10 + '0');
}

int main(void) 
{
int i = 0;
int size = 8;
int tab[] = {3,6,7,4,2,8,1,5};

ft_sort_int_tab(tab, 8);

    while (i < size)
    {
        ft_putnbr(tab[i]);
        ft_putchar(' ');
        i++;
    }

    ft_putchar('\n');
    return(0);
}