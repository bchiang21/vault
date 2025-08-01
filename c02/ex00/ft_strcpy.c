/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:53:25 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 12:04:09 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char ft_strcpy(char *dest, char *src)
{
	int i = 0;

	while (i != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return *dest;

}


int main(void)
{
	char x[]="LifeUniverseEverything";
	char y[]="";
	ft_strcpy(y, x);
	printf("%s, %s", x, y);
}

