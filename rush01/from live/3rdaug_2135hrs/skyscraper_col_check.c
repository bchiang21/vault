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

// returns 1 if grid is not finished (ie move on) or correct, else returns 0
int	ft5a_check_col_top_to_bottom(int grid[4][4], int *clues, int col)
{
	int	max;
	int	visible;
	int	row;

	max = 0;
	visible = 0;
	row = 0;
	while (row < 4)
	{
		if (grid[row][col] == 0)
			return (2);
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		row++;
	}
	if (visible != clues[col])
		return (0);
	return (1);
}

// returns 1 if grid is not finished (ie move on) or correct, else returns 0
int	ft5b_check_col_bottom_to_top(int grid[4][4], int *clues, int col)
{
	int	max;
	int	visible;
	int	row;

	row = 3;
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

//Check column for visibility. Max is tallest_b so far,
//visible is no. of buildings seen so far
int	ft5_check_col(int grid[4][4], int *clues, int col)
{
	if (ft5a_check_col_top_to_bottom(grid, clues, col) == 2)
		return (1);
	if ((ft5a_check_col_top_to_bottom(grid, clues, col))
		&& (ft5b_check_col_bottom_to_top(grid, clues, col)))
		return (1);
	else
		return (0);
}
