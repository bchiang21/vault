/ ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:27:51 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 16:28:48 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int	main(void)
{
	char	x[] = "nevergonnaletyoudown";
	char	y[] = "nEvErGonnAGivEYouUp";

	ft_putchar(ft_str_is_lowercase(x) + '0');
	write(1, "\n", 1);
	ft_putchar(ft_str_is_lowercase(y) + '0');
	write(1, "\n", 1);
	return (0);
}
*/
