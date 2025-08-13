/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:47:07 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/13 22:01:01 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    if (nb < 0)
    return 0;

    int i = 1;
    while (nb > 1)
    {
        i = i * nb;
        nb = nb - 1;
    }
    return i;
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    int x = 10;
    ft_iterative_factorial(x);
    
    printf("%i", ft_iterative_factorial(x));
}
