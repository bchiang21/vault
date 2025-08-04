/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraperlinecheck.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:20:00 by thtay             #+#    #+#             */
/*   Updated: 2025/08/03 17:26:17 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//they all check if a line is solved and returns 1 if so.

//returns 1 if row is correct or incomplete (eg filled with 0)
int	ft6a_check_row_left_to_right(int grid[4][4], int *clues, int row)
{
	int	max;
	int	visible;
	int	col;

	max = 0;
	visible = 0;
	col = 0;
	while (col < 4)
	{
		if (grid[row][col] == 0)
			return (2);
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		col++;
	}
	if (visible != clues[row + 8])
		return (0);
	return (1);
}

int	ft6b_check_row_right_to_left(int grid[4][4], int *clues, int row)
{
	int	col;
	int	max;
	int	visible;

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
	return (1);
}

int	ft6_check_row(int grid[4][4], int *clues, int row)
{
	if (ft6a_check_row_left_to_right(grid, clues, row) == 2)
		return (1);
	if ((ft6a_check_row_left_to_right(grid, clues, row))
		&& (ft6b_check_row_right_to_left(grid, clues, row)))
		return (1);
	else
		return (0);
}
