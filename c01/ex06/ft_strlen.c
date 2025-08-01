/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:25:39 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 10:54:03 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/* #include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	len;

	len = ft_strlen("LifeAnswerUniverse");
	printf("%d\n", len);
	return (0);
} */
