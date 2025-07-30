/* Create a function that reverses a given array of integers 
(the first element becomes the last, and so on).
The function takes two arguments: a pointer to an int and 
the number of elements in the array. 
The function should be prototyped as follows:
void ft_rev_int_tab(int *tab, int size);*/

#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i = 0;
    int temp;
    while (i < size /2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 - i]; 
        tab[size - 1 - i] = temp;
        i++;
    }

}

void ft_putnbr(int n)
{
    char c;
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        }
        c = '0' + (n % 10);
        write(1, &c, 1);
}

int main(void)
{
    int i = 0;

    int tab[8] = {1,2,3,4,5,6,7,8};
    ft_rev_int_tab(&tab[0], 8);

    while (i < 8)
    {
        ft_putnbr(tab[i]);
        i++;
    }

    return(0);

}