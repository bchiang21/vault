/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:05:36 by bchiang           #+#    #+#             */
/*   Updated: 2025/07/27 16:51:57 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	num;
	char	c;

	num = 0;
	while (num <= 9)
	{
		c = '0' + num;
		write(1, &c, 1);
		num++;
	}
}

/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/