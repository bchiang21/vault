/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:35:28 by bchiang           #+#    #+#             */
/*   Updated: 2025/07/27 16:52:21 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	positive;
	char	negative;

	positive = 'P';
	negative = 'N';

	if (n >= 0)
	{
		write(1, &positive, 1);
	}
	else
	{
		write(1, &negative, 1);
	}
}

/*
int	main(void)
{
	ft_is_negative(4);
	return (0);
}
*/