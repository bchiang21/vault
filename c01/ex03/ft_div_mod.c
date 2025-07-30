
/* Create a function ft_div_mod with the following prototype:
void ft_div_mod(int a, int b, int *div, int *mod);
This function divides ‘a’ by ‘b’ and stores the result 
in the integer pointed to by ‘div’. 
It also stores the remainder of the division of 'a' by 'b' 
in the integer pinted to by 'mod'
*/

#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod )
{

    *div = (a / b);
    *mod = (a % b);
 
}

int main(void)
{
   
int x;
x = 10;

int y;
y = 5;

int div;
int mod;

ft_div_mod(x, y , &div, &mod);

printf("%d \n", div);
printf("%d \n", mod);
    
}
