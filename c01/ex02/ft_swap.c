
/* Create a function that swaps the values of two integers using their addresses 
received as parameters. The function should be prototyped as follows:
void ft_swap(int *a, int *b);
*/

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int tmp;
   
   tmp = *a;
   *a = *b;
   *b = tmp;

}

int main(void)
{
   int x = 1;
   int y = 2;

   ft_swap(&x, &y);
    printf("%d, %d", x,y);

    return(0);
}