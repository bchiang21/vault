/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:22:43 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 10:37:57 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* #include <stdio.h>
int	main(void)
{
	int	x;
	int	y;

	x = 1;
	y = 2;
	ft_swap(&x, &y);
	printf("%d, %d\n", x, y);
	return (0);
} */
