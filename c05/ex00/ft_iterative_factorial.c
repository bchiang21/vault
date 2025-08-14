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

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		result = result * nb;
		nb = nb - 1;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	x;

	x = 10;
	printf("%i\n", ft_iterative_factorial(x));
	return (0);
}