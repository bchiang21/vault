/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:34:00 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/10 20:25:00 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_len_if_valid(char *b)
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

/* skips blank spaces and reads consecutive signs; returns +1 or -1 */
int	skip_spaces_and_read_sign(char **p)
{
	int	sign;

	sign = 1;
	while ((**p >= 9 && **p <= 13) || **p == 32)
		(*p)++;
	while (**p == '+' || **p == '-')
	{
		if (**p == '-')
			sign = -sign;
		(*p)++;
	}
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	bl;
	int	sign;
	int	res;
	int	idx;

	bl = base_len_if_valid(base);
	if (!bl)
		return (0);
	sign = skip_spaces_and_read_sign(&str);
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

/* #include <stdio.h>
int	main(void)
{
	char	*s;
	char	*b;
	int		result;

	s = " \t\n --+-+2A";
	b = "0123456789ABCDEF";
	result = ft_atoi_base(s, b);
	printf("%d\n", result);
	return (0);
} */
