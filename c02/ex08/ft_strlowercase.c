/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:04:18 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/04 21:04:42 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

/*
int	main(void)
{
	char	x[] = "NEVERGONNATELLALIE";
	char	y[] = "aNdHuRtYoU";
	int		i;

	ft_strlowercase(x);
	ft_strlowercase(y);

	i = 0;
	while (x[i])
	{
		write(1, &x[i], 1);
		i++;
	}
	write(1, "\n", 1);

	i = 0;
	while (y[i])
	{
		write(1, &y[i], 1);
		i++;
	}
	write(1, "\n", 1);

	return (0);
}
*/
