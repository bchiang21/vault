/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 16:31:44 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/08 16:32:03 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Create a function that prints a string of characters to the standard output.
Prototype: void ft_putstr(char *str);
*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	*x;

	x = "supercalifragilisticexpielidocious";
	ft_putstr(x);
	return (0);
}
*/
