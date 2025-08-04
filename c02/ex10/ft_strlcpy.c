/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 21:08:23 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/04 21:20:00 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	len = 0;
	while (src[len])
		len++;
	return (len);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(unsigned int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

/*
int	main(void)
{
	char			buffer[4];
	unsigned int	len;

	len = ft_strlcpy(buffer, "nevergonna", 4);
	ft_putstr("Copied string: ");
	ft_putstr(buffer);
	write(1, "\n", 1);

	ft_putstr("Length of source: ");
	ft_putnbr(len);
	write(1, "\n", 1);
	return (0);
}
*/
