/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_is_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:52:45 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/04 20:53:25 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	char	x[] = "NeverGonnaLetYouNull";
	char	y[] = "null\n\a\b\t";

	if (ft_str_is_printable(x))
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);

	if (ft_str_is_printable(y))
		write(1, "1\n", 2);
	else
		write(1, "0\n", 2);

	return (0);
}
*/
