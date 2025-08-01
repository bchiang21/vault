/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:24:36 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 10:52:48 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* #include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 10;
	y = 5;
	ft_ultimate_div_mod(&x, &y);
	printf("%d, %d\n", x, y);
	return (0);
} */
