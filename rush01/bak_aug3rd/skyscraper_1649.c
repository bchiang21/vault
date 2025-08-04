/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraperfixed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:16:44 by helim             #+#    #+#             */
/*   Updated: 2025/08/03 16:48:56 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>


//0. Remove spaces from inputs
char	*ft0_remove_spaces(char *str)
{
	int	index;
	static	char	clues_no_space[100];
	
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

//1.Take clues fed in, and save it AND REMOVE SPACES?
int	ft1_clue_init(char *no_space_input, int *clues)
{
	int		clue_index;
	char	*input;

	input = ft0_remove_spaces(no_space_input);
	clue_index = 0;
	while (clue_index < 16)
	{
		if (input[clue_index] == '\0') // input ended early
			return (1);
		if (input[clue_index] >= '1' && input[clue_index] <= '4')
		{
			clues[clue_index] = input[clue_index] - '0';
			clue_index++;
		}
		else
			return (1); // invalid character (not a digit)
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

//4. Check that rows and cols are unique
int	ft4_check_unique(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0); // oh no, got non-unique values
		i++;
	}
	return (1); // yes unique 
}


int	ft5a_check_col_top_to_bottom(int grid[4][4], int *clues, int col)
{
	int	max;
	int	visible;
	int	row;

	max = 0;
	visible = 0; 
	row = 0;
	while (row < 4)// top to bottom check
	{
		if (grid[row][col] == 0)
		return (1); // not yet finish grid 

		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		row++;
	}
	if (visible != clues[col])
		return (0); //hey there's a problem, does not solve
	return (1);
}

int	ft5b_check_col_bottom_to_top(int grid[4][4], int *clues, int col)
{
	int	max;
	int	visible;
	int	row;

	row = 3;// bottom to top
	max = 0;
	visible = 0;
	while (row >= 0)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		row--;
	}
	if (visible != clues[col + 4])
		return (0);
	return (1);
}

//Check column for visibility. Max is tallest_b so far, visible is no. of buildings seen so far
int	ft5_check_col(int grid[4][4], int *clues, int col)
{
	
	if (ft5a_check_col_top_to_bottom(grid, clues, col))
		return (1);
	if (ft5b_check_col_bottom_to_top(grid, clues, col))
		return (1);
	else
		return (0);
}

//Check row for visibility
int	ft6_check_row(int grid[4][4], int *clues, int row)
{
	int	max = 0;
	int	visible = 0;
	int	col = 0;

	// left to right
	while (col < 4)
	{
		if (grid[row][col] == 0)
			return (1); // "let's just carry on"
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		col++;
	}
	if (visible != clues[row + 8])
		return (0);
	// right to left
	col = 3;
	max = 0;
	visible = 0;
	while (col >= 0)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		col--;
	}
	if (visible != clues[row + 12])
		return (0);
	return (1); //this means okay, puzzle is fine so far / fulfills the visibility rules
}

//Try to solve this
int	ft7_solve(int grid[4][4], int *clues, int pos)
{
	int	row = pos / 4;
	int	col = pos % 4;
	int	num = 1;

	if (pos == 16)
		return (ft5_check_col(grid, clues, col) 
			&& ft6_check_row(grid, clues, row)); // NOOO. THIS DOESN'T WORK.
	while (num <= 4)
	{
		if (ft4_check_unique(grid, row, col, num))
		{
			grid[row][col] = num;
			if (ft5_check_col(grid, clues, col) && ft6_check_row(grid, clues, row))
			{
				if (ft7_solve(grid, clues, pos + 1))
					return (1);
			}
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int	grid[4][4];
	int	*clues = malloc(sizeof(int) * 16);
	int	i;
	int	j;

	if (argc != 2)
		return (write(1, "Please input only 1 string.\n", 28), 1);
	ft1_clue_init(argv[1], clues);
	ft3_grid_init(grid);
	if (ft7_solve(grid, clues, 0))
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				ft2_put_num(grid[i][j]);
				if (j < 3)
					write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "Check your inputs.\n", 19);
	free(clues);
	return (0);
}
