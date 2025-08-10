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

/* putchar */
static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* strlen */
int	ft_strlen(const char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

/* base validator: len >= 2, no +/-, no duplicates */
int	base_is_valid(const char *base)
{
	int len;
	int i;
	int j;

	if (!base)
		return (0);
	len = ft_strlen(base);
	if (len < 2)
		return (0);

	i = 0;
	while (i < len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;          
	int		blen;
	char	buf[66];   
	int		i;

	if (!base || !base_is_valid(base))
		return;

	blen = ft_strlen(base);
	n = (long)nbr;

	if (n == 0)
	{
		ft_putchar(base[0]);
		return;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}

	i = 0;
	while (n > 0)
	{
		buf[i++] = base[n % blen];
		n /= blen;
	}
	while (i-- > 0)
		ft_putchar(buf[i]);
}

/* quick demo */
int main(void)
{
	char *hex = "0123456789ABCDEF";
	int   n = 257;

	ft_putnbr_base(n, hex);   /* prints 101 */
	ft_putchar('\n');
	ft_putnbr_base(-255, hex);/* prints -FF */
	ft_putchar('\n');
	ft_putnbr_base(42, "01"); /* prints 101010 */
	ft_putchar('\n');
	return 0;
}
