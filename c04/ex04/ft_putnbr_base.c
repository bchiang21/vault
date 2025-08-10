/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:33:31 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/08 16:33:47 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	base_valid_len(char *b)
{
	int	i;
	int	j;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] == '+' || b[i] == '-' || b[i] <= 32 || b[i] > 126)
			return (0);
		j = i + 1;
		while (b[j])
		{
			if (b[i] == b[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	put_unsigned_base(unsigned int n, char *b, int blen)
{
	if (n >= (unsigned int)blen)
		put_unsigned_base(n / (unsigned int)blen, b, blen);
	ft_putchar(b[n % (unsigned int)blen]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	blen;

	blen = base_valid_len(base);
	if (!blen)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		put_unsigned_base((unsigned int)(-nbr), base, blen);
	}
	else
		put_unsigned_base((unsigned int)nbr, base, blen);
}

/*
int	main(void)
{
	char	*hex;
	int		n;

	hex = "0123456789ABCDEF";
	n = 257;
	ft_putnbr_base(n, hex);
	ft_putchar('\n');
	ft_putnbr_base(-255, hex);
	ft_putchar('\n');
	ft_putnbr_base(42, "01");
	ft_putchar('\n');
	return (0);
}
*/
