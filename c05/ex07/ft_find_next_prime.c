/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:55:38 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/13 21:55:51 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_find_next_prime(int nb) 
{
    int n;
    if (nb < 2) 
    {
        n = 2;
    } else {
        n = nb + 1;
    }

    while (1) {
        int prime = 1;
        int i = 2;

        while (i <= n / i) { // look for a divisor that evenly divides n
            if (n % i == 0) {
                prime = 0;
                break;
            }
            i++;
        }

        if (prime) 
        {
            return n;
        }
        n++;
    }
}

#include <stdio.h>

int main(void)
{
int x = 5;
printf("%i", ft_find_next_prime(x));
// 2, 3, 5, 7, 11, 13, 17, 19, 23, and 29 

}
