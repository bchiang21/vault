/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:47:46 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/13 21:48:03 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb == 1 || nb == 0)
		return (1);
	result = nb * ft_recursive_factorial(nb - 1);
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	int	x;

	x = 5;
	printf("%i", ft_recursive_factorial(x));
	return (0);
} */
