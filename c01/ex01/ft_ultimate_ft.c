/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 19:06:19 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 10:50:12 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

/* #include <unistd.h>
int	main(void)
{
	int			n;
	int			*nbr1 = &n;
	int			**nbr2 = &nbr1;
	int			***nbr3 = &nbr2;
	int			****nbr4 = &nbr3;
	int			*****nbr5 = &nbr4;
	int			******nbr6 = &nbr5;
	int			*******nbr7 = &nbr6;
	int			********nbr8 = &nbr7;
	int			*********nbr9 = &nbr8;
	char		out[3];

	ft_ultimate_ft(nbr9);

	out[0] = (n / 10) + '0';
	out[1] = (n % 10) + '0';
	out[2] = '\n';
	write(1, &out, 3);
	return (0);
} */
