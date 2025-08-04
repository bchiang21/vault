/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper_1649.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:16:44 by helim             #+#    #+#             */
/*   Updated: 2025/08/03 17:35:42 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "skyscraper_check.h"

//0. Remove spaces from inputs
char	*ft0_remove_spaces(char *str)
{
	int			index;
	static char	clues_no_space[100];

	index = 0;
	while (*str)
	{
		if ((*str >= '1') && (*str <= '9'))
		{
			clues_no_space[index] = *str;
			index++;
		}
		str++;
	}
	clues_no_space[index] = '\0';
	return (clues_no_space);
}

//1.Take clues fed in, and save it.
//returns 1 if cell is 0 or if invalid char (not digit)
int	ft1_clue_init(char *no_space_input, int *clues)
{
	int		clue_index;
	char	*input;

	input = ft0_remove_spaces(no_space_input);
	clue_index = 0;
	while (clue_index < 16)
	{
		if (input[clue_index] == '\0')
			return (1);
		if (input[clue_index] >= '1' && input[clue_index] <= '4')
		{
			clues[clue_index] = input[clue_index] - '0';
			clue_index++;
		}
		else
			return (1);
	}
	return (0);
}

//2. Function to write numbers
void	ft2_put_num(int num)
{
	char	c;

	c = num + '0';
	write(1, &c, 1);
}

//3. Initialise a 4*4 grid and fill it with zeroes
void	ft3_grid_init(int grid[4][4])
{
	int	row;
	int	col;

	row = 0;
	while (row < 4)
	{
		col = 0;
		while (col < 4)
		{
			grid[row][col] = 0;
			col++;
		}
		row++;
	}
}
