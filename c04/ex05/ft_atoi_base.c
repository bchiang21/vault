/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:34:00 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/10 20:15:00 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	base_len(char *b)
{
	int	i;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] == '+' || b[i] == '-' || b[i] <= 32 || b[i] > 126)
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	bidx(char c, char *b)
{
	int	i;

	i = 0;
	while (b[i])
	{
		if (b[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	bl;
	int	sign;
	int	res;
	int	idx;

	bl = base_len(base);
	if (!bl)
		return (0);
	while (is_space(*str))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	res = 0;
	idx = bidx(*str, base);
	while (idx != -1)
	{
		res = res * bl + idx;
		str++;
		idx = bidx(*str, base);
	}
	return (res * sign);
}

int	main(void)
{
	char	*s;
	char	*b;
	int		result;

	s = "2A";
	b = "0123456789ABCDEF";
	result = ft_atoi_base(s, b);
	printf("%d\n", result);
	return (0);
}
