/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:55:13 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/13 21:55:27 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{

    int is_prime = 1;

    if (nb <= 1) 
    {
        is_prime = 0;
    }

    else {
        int i = 2;
        while (i <= nb / i) 
        {
            if (nb % i == 0) 
            { 
                is_prime = 0; 
                break; 
            }
            i++;
            return is_prime;
        } 
    }
    return 0;
}


#include <stdio.h>

int main(void)
{

    int x = 11;

    printf("%i", ft_is_prime(x));

}
