/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:54:53 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/06 20:55:22 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	char	*sourceX = " LIGHT!";
	char	destY[50] = "Let there be...";

	ft_strcat(destY, sourceX);
	printf("%s\n", destY);
	return (0);
}
*/
