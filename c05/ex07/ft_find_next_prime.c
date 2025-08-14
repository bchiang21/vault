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

int	ft_find_next_prime(int nb)
{
	int	n;
	int	i;
	int	prime;

	n = 0;
	i = 0;
	prime = 0;
	if (nb < 2)
		n = 2;
	else
		n = nb;
	while (1)
	{
		prime = 1;
		i = 2;
		while (i <= n / i)
		{
			if (n % i == 0)
				prime = 0;
			i = i + 1;
		}
		if (prime == 1)
			return (n);
		n = n + 1;
	}
}

/* #include <stdio.h>

int	main(void)
{
	int	x;

	x = 5;
	printf("%i", ft_find_next_prime(x));
	return (0);
} */
