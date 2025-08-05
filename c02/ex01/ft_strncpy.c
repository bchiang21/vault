/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchiang <bchiang@student.42singapore.sg>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 13:51:21 by bchiang           #+#    #+#             */
/*   Updated: 2025/08/01 13:52:41 by bchiang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

#include <stdio.h>
#include <unistd.h>
#include <string.h>

// Helper to show nulls and actual copied content
void	print_raw_bytes(char *str, unsigned int n)
{
	unsigned int i = 0;

	printf("Raw bytes   : ");
	while (i < n)
	{
		if (str[i] == '\0')
			printf("\\0");
		else
			printf("%c", str[i]);
		i++;
	}
	printf("\n");
}

// Test harness for ft_strncpy
void	test(char *src, unsigned int n)
{
	char custom[50] = {0};

	ft_strncpy(custom, src, n);

	printf("Source      : \"%s\"\n", src);
	printf("n           : %u\n", n);
	printf("ft_strncpy  : \"%s\"\n", custom);
	print_raw_bytes(custom, n);
	printf("--------------------------\n");
}

int	main(void)
{
	test("LifeUniverseEverything", 4);     // Partial copy
	test("Life", 4);                       // Exact copy
	test("Life", 10);                      // Pad with '\0'
	test("", 5);                           // Empty source string
	test("Test", 0);                       // n = 0
	test("AB\0CD", 5);                     // Embedded null

	return 0;
}