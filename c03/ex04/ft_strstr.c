/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42.singapore.sg>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:59:52 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/06 21:24:54 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	char	*string = "WhereDoIfindWallyInThisString?";
	char	*to_find = "Wally";
	char	*result;

	result = ft_strstr(string, to_find);
	printf("%s\n", result);
	return (0);
} */
