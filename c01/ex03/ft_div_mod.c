/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:23:54 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 10:38:42 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>
int	main(void)
{
	int	x;
	int	y;
	int	div;
	int	mod;

	x = 10;
	y = 5;
	ft_div_mod(x, y, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
} */
