/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:50:12 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/13 21:54:05 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = ft_recursive_power(nb, power - 1);
	result = result * nb;
	return (result);
}

int	main(void)
{
	int	x;
	int	y;
	int	ans;

	x = 2;
	y = 5;
	ans = ft_recursive_power(x, y);
	printf("%i", ans);
	return (0);
}
