/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:19:14 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/14 15:19:33 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc != 4)
	{
		write(1, "3 arguments pls", 15);
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		ft_write(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
