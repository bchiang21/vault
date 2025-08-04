/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:36:02 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 15:45:38 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	x[] = "12345";
	char	y[] = "NeverGonnaGiveYouUp";
	char	z[] = "N3v3rGonnaL3tYouGo";

	printf("Value in X: %d\n", ft_str_is_numeric(x));
	printf("Value in Y: %d\n", ft_str_is_numeric(y));
	printf("Value in Z: %d\n", ft_str_is_numeric(z));
	return (0);
}
*/
