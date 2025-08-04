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

char	*ft0_remove_spaces(char *str);
int		ft1_clue_init(char *no_space_input, int *clues);
void	ft2_put_num(int num);
void	ft3_grid_init(int grid[4][4]);
int		ft5a_check_col_top_to_bottom(int grid[4][4], int *clues, int col);
int		ft5b_check_col_bottom_to_top(int grid[4][4], int *clues, int col);
int		ft5_check_col(int grid[4][4], int *clues, int col);
int		ft6a_check_row_left_to_right(int grid[4][4], int *clues, int row);
int		ft6b_check_row_right_to_left(int grid[4][4], int *clues, int row);
int		ft6_check_row(int grid[4][4], int *clues, int row);

//4. Check that rows and cols are unique. If unique, returns 1
int	ft4_check_unique(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

//Try to solve this
int	ft7_solve(int grid[4][4], int *clues, int pos)
{
	int	row;
	int	col;
	int	num;

	row = pos / 4;
	col = pos % 4;
	num = 1;
	if (pos == 16)
		return (ft5_check_col(grid, clues, col)
			&& ft6_check_row(grid, clues, row));
	while (num <= 4)
	{
		if (ft4_check_unique(grid, row, col, num))
		{
			grid[row][col] = num;
			if (ft5_check_col(grid, clues, col)
				&& ft6_check_row(grid, clues, row))
				if (ft7_solve(grid, clues, pos + 1))
					return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

void	ft8_write_answer(int grid[4][4])
{
	int	i;
	int	j;

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

int	main(int argc, char **argv)
{
	int	grid[4][4];
	int	*clues;

	clues = malloc(sizeof(int) * 16);
	if (argc != 2)
		return (write(1, "Please input only 1 string.\n", 28), 1);
	ft1_clue_init(argv[1], clues);
	ft3_grid_init(grid);
	if (ft7_solve(grid, clues, 0))
		ft8_write_answer(grid);
	else
		write(1, "Check your inputs.\n", 19);
	free(clues);
	return (0);
}
