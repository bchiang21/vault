/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:32:12 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/10 19:22:41 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == 2147483647)
	{
		write(1, "2147483647", 10);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb <= 9)
	{
		c = '0' + nb;
		write(1, &c, 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		c = '0' + (nb % 10);
		write(1, &c, 1);
	}
}
/*
#include <unistd.h>
int	main(void)
{
	int	x;

	x = 2147483647;
	ft_putnbr(x);
} */
