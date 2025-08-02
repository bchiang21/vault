#include <unistd.h>
#include <stdlib.h>

//Initialise clues fed in by Main

int ft_clue_init(char *input, int *clues)
{
	int i = 0;
	while (i < 16)
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			clues[i] = input[i] ;
			i++;
		}
		else
			return 1; // invalid character
	}
	return 0;
}


//Function to write numbers
void ft_put_num(int num)
{
	char c = num + '0';
	write(1, &c, 1);
}

//Initialise the grid

void ft_grid_init(int grid[4][4])
{
	int r = 0;
	while (r < 4)
	{
		int c = 0;
		while (c < 4)
		{
			grid[r][c] = 0;
			c++;
		}
		r++;
	}
}

//Check that rows and cols are unique
int ft_check_unique(int grid[4][4], int row, int col, int num)
{
	int i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num || grid[i][col] == num)
			return 0;
		i++;
	}
	return 1;
}

//Check column for visibility
int ft_check_col(int grid[4][4], int *clues, int col)
{
	int max = 0, visible = 0;
	int row = 0;

	// top to bottom
	while (row < 4)
	{
		if (grid[row][col] == 0)
			return 1;
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		row++;
	}
	if (visible != clues[col])
		return 0;

	// bottom to top
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
		return 0;
	return 1;
}

//Check row for visibility
int ft_check_row(int grid[4][4], int *clues, int row)
{
	int max = 0, visible = 0;
	int col = 0;

	// left to right
	while (col < 4)
	{
		if (grid[row][col] == 0)
			return 1;
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		col++;
	}
	if (visible != clues[row + 8])
		return 0;

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
		return 0;
	return 1;
}

//Write the answers
int ft_solve(int grid[4][4], int *clues, int pos)
{
	if (pos == 16)
		return 1;

	int row = pos / 4;
	int col = pos % 4;
	int num = 1;

	while (num <= 4)
	{
		if (ft_check_unique(grid, row, col, num))
		{
			grid[row][col] = num;
			if (ft_check_col(grid, clues, col) && ft_check_row(grid, clues, row))
			{
				if (ft_solve(grid, clues, pos + 1))
					return 1;
			}
			grid[row][col] = 0;
		}
		num++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "Error1\n", 6), 1);

	int grid[4][4];
	int *clues = malloc(sizeof(int) * 16);
	int i, j;

	ft_clue_init(argv[1], clues);
	ft_grid_init(grid);

	if (ft_solve(grid, clues, 0))
	{
		i = 0;
		while (i < 4)
		{
			j = 0;
			while (j < 4)
			{
				ft_put_num(grid[i][j]);
				if (j < 3)
					write(1, " ", 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "Error2\n", 6);

	free(clues);
	return 0;
}
