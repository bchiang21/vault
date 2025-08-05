/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:06:31 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/04 21:06:51 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alnum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

void	ft_strcapitalize(char *str)
{
	int	i;
	int	is_new_word;

	i = 0;
	is_new_word = 1;
	while (str[i])
	{
		if (is_alnum(str[i]))
		{
			if (is_new_word)
			{
				str[i] = to_upper(str[i]);
				is_new_word = 0;
			}
			else
				str[i] = to_lower(str[i]);
		}
		else
			is_new_word = 1;
		i++;
	}
}

/*
int	main(void)
{
	char	x[] = "hi, how are you? 42words forty-two; fifty+and+one";
	int		i;

	ft_strcapitalize(x);
	i = 0;
	while (x[i])
	{
		write(1, &x[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
*/
