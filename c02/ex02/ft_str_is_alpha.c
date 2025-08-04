/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 14:45:14 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 14:46:02 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	x[] = "LetThereBeLight";
	char	y[] = "L3tTh3r3B3Light";

	printf("This is alpha - %d\n", ft_str_is_alpha(x));
	printf("This is not - %d\n", ft_str_is_alpha(y));
	return (0);
}
*/
