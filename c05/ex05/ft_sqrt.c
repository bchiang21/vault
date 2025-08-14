/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:54:43 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/13 21:55:00 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	n;
	int	result;

	i = 1;
	if (nb < 0)
		return (0);
	while (i < nb)
	{
		result = i * i;
		n = i;
		if (result == nb)
			return (n);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int	x;

	x = 125;
	printf("%i", ft_sqrt(x));
	return (0);
} */
