/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:50:20 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/04 20:50:51 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'A') || (str[i] > 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	x[] = "nevergonnagiveyouup";
	char	y[] = "NEVERGONNALETYOUDOWN";

	if (ft_str_is_uppercase(x))
		write(1, "1", 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);

	if (ft_str_is_uppercase(y))
		write(1, "1", 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);

	return (0);
}
*/
