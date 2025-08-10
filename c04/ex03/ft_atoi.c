/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:32:53 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/08 16:33:10 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int ft_atoi(char *str)
{
int i = 0;
int sign = 1;
int result = 0;

while(isspace(str[i]))
 {
    i++;
 }
// deal with negative sign

while(str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -sign;
            i++;
    }

// check for base 10 numbers moving consecutively UNTIL non-conforming character
// Start with 0. Multiply by 10 (decimal). Add (or rather, minus 48 to get ascii-int)
while(str[i] >= '0' && str[i] <= '9')
{
    result = (result * 10) + (str[i] - '0');
    i++;
}

// Return the +/- with the result
return sign * result;

}

void putnbr(int n)
{
    char buf[12]; // kiasu - to cater -2147483648
    int  i = 0;
    int nb = n;  // use long for safety

    if (nb == 0)
    {
        write(1, "0", 1);
        return;
    }

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }

    while (nb > 0)
    {
        buf[i++] = '0' + (nb % 10);
        nb /= 10;
    }

    while (i > 0)
    {
        i--;
        write(1, &buf[i], 1);
        
    }
    write(1, "\n", 1);
}

// For evaluator's copying: " ---+--+1234ab567

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "Oi. One argument pls.\n", 23);
        return 1;
    }

    int n = ft_atoi(argv[1]);
    putnbr(n);

    return 0;
}

