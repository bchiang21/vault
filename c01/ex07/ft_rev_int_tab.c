/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:26:13 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 10:47:39 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/* #include <unistd.h>

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = '0' + (n % 10);
	write(1, &c, 1);
}

int	main(void)
{
	int	i;
	int	tab[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	i = 0;
	ft_rev_int_tab(tab, 8);
	while (i < 8)
	{
		ft_putnbr(tab[i]);
		i++;
	}
	return (0);
} */
