/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 21:00:00 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/06 21:00:00 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] == '\0')
			break ;
		i++;
	}
	return (0);
}

/*
#include <unistd.h>

int	main(void)
{
	unsigned int	n;
	char			*x;
	char			*y;
	int				result;
	char			c;

	n = 11;
	x = "stringone";
	y = "stringOne";
	result = ft_strncmp(x, y, n);
	if (result < 0)
		c = '-';
	else if (result > 0)
		c = '+';
	else
		c = '0';
	write(1, &c, 1);
	write(1, "\n", 1);
	return (0);
}
*/
