/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 21:20:56 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/06 21:23:52 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	i = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	src_len = ft_strlen(src);
	if (dest_len == size)
		return (size + src_len);
	while (src[i] && (dest_len + i + 1 < size))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	else
		dest[size - 1] = '\0';
	return (dest_len + src_len);
}

/* #include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char			x[] = "ThisIsFirst";
	char			y[25] = "ThisIsSecond";
	unsigned int	result;

	result = ft_strlcat(y, x, 23);
	printf("Resulting string: '%s'\n", y);
	printf("Total length tried: %u\n", result);
	return (0);
} */
