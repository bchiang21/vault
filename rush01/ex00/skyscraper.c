#include <unistd.h>
#include <stdlib.h>

// Parse clues from input string
int ft_clue_init(char *input, int *clues)
{
	int i = 0;
	while (i < 16)
	{
		if (input[i] >= '1' && input[i] <= '4')
		{
			clues[i] = input[i] - '0'; // Convert ASCII to int
			i++;
		}
		else
			return 1; // invalid character
	}
	return 0;
}

// Output a single digit
void ft_put_num(int num)
{
	char c = num + '0';
	write(1, &c, 1);
}

// Set all grid cells to 0
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

// Ensure number is unique in row and column
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

// Visibility check for a column
int ft_check_col(int grid[4][4], int *clues, int col)
{
	int max = 0, visible = 0;
	int row = 0;

	// Top to bottom
	while (row < 4)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		row++;
	}
	if (visible != clues[col])
		return 0;

	// Bottom to top
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

// Visibility check for a row
int ft_check_row(int grid[4][4], int *clues, int row)
{
	int max = 0, visible = 0;
	int col = 0;

	// Left to right
	while (col < 4)
	{
		if (grid[row][col] > max)
		{
			max = grid[row][col];
			visible++;
		}
		col++;
	}
	if (visible != clues[row + 8])
		return 0;

	// Right to left
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

// Check all row and column clues
int ft_all_clues_valid(int grid[4][4], int *clues)
{
	for (int i = 0; i < 4; i++)
	{
		if (!ft_check_row(grid, clues, i) || !ft_check_col(grid, clues, i))
			return 0;
	}
	return 1;
}

// Recursive backtracking solver: only check uniqueness during fill
int ft_solve(int grid[4][4], int *clues, int pos)
{
	if (pos == 16)
		return ft_all_clues_valid(grid, clues); // Check all clues at end

	int row = pos / 4;
	int col = pos % 4;

	for (int num = 1; num <= 4; num++)
	{
		if (ft_check_unique(grid, row, col, num))
		{
			grid[row][col] = num;

			// Optional: debug output
			// write(1, "Trying pos: ", 12);
			// ft_put_num(row); write(1, ",", 1); ft_put_num(col); write(1, "\n", 1);

			if (ft_solve(grid, clues, pos + 1))
				return 1;

			grid[row][col] = 0; // Backtrack
		}
	}
	return 0;
}

// Main program
int main(int argc, char **argv)
{
	if (argc != 2)
		return (write(1, "Error1\n", 7), 1);

	int grid[4][4];
	int *clues = malloc(sizeof(int) * 16);
	if (!clues)
		return (write(1, "Error2\n", 7), 1);

	if (ft_clue_init(argv[1], clues) != 0)
		return (write(1, "Error3\n", 7), free(clues), 1);

	ft_grid_init(grid);

	if (ft_solve(grid, clues, 0))
	{
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				ft_put_num(grid[i][j]);
				if (j < 3)
					write(1, " ", 1);
			}
			write(1, "\n", 1);
		}
	}
	else
		write(1, "Error4\n", 7);

	free(clues);
	return 0;
}
