/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 15:36:02 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 15:45:38 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Return 1 only if string is digits, return 0 if anything else

int ft_str_is_num(char *str)
{
int i = 0;

while (str[i])
{
	if (str[i] > '0' && str[i] < '9' )
	return 1;
	i++;
}
return 0;
}

#include <stdio.h>
int main(void)
{
	char x[] = "12345";
	char y[] = "NeverGonnaGiveYouUp";
	char z[] = "N3v3rGonnaL3tYouGo";

	ft_str_is_num(x);
	ft_str_is_num(y);
	ft_str_is_num(z);

	printf("Value in X: %d ", ft_str_is_num(x));
	printf("Value in Y: %d ", ft_str_is_num(y));
	printf("Value in Z: %d", ft_str_is_num(z));

}

