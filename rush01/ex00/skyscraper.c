#include <stdio.h>
#include <unistd.h>

// Launched using "col1top col2top col3top col4top col1bottom col2bottom col3bottom col4bottom row1left row2left row3left row4left row1 right row2right row3right row4right"

// Take in a string of numbers for clues
//clues = 1 2 4 2 4 2 1 2 1 2 3 3 2 3 1 2

//The writing functions

int g_size = 4;

void put_char(char c)
{
    write(1, &c, 1);
}

void print_grid(int **grid) // rows and grids 
{
    int r = 0;
    while (r < g_size)
    {
        int c = 0;
        while (c < g_size)
        {
            put_num(grid[r][c]);
            if (c < g_size - 1)
                put_char(' ');
                c++;
        }
        put_char('\n');
        r++;
    }
}
// check clues

int ft_check_clues(char *str, int **clues)
{
    int i = 0;
    int count =0;
    while (str[i])
    {
        if (str[i] >= '1' && str[i] <= '4' && count < 16)
        {
            int val = str[i] - '0';
            if (count < 4)
                clues[0][count] = val;
            else if (count < 8)
                clues[1][count - 4] = val;
            else if (count < 12)
                clues[2][count -8] = val;
            else   
                clues[3][count - 12] = val;
            count++;
        }
        i++;
    }
    return (count == 16);


//initialize clue and grid

int **alloc_grid(void)
{
	int **grid = malloc(SIZE * sizeof(int *));
	int r = 0;
	while (r < SIZE)
	{
		grid[r] = malloc(SIZE * sizeof(int));
		int c = 0;
		while (c < SIZE)
		{
			grid[r][c] = 0;
			c++;
		}
		r++;
	}
	return grid;
}

int **alloc_clues(void)
{
	int **clues = malloc(4 * sizeof(int *));
	int i = 0;
	while (i < 4)
	{
		clues[i] = malloc(SIZE * sizeof(int));
		int j = 0;
		while (j < SIZE)
		{
			clues[i][j] = 0;
			j++;
		}
		i++;
	}
	return clues;
}

//Are rows and columns unique?

int is_unique(int **grid, int row, int col, int val)
{
	int i;

	i = 0;
	while (i < SIZE)
	{
		if (grid[row][i] == val)
			return (0);
		i++;
	}

	i = 0;
	while (i < SIZE)
	{
		if (grid[i][col] == val)
			return (0);
		i++;
	}
	return (1);
}

//Count top down

int count_visible_col(int grid, int col, int dir)
{
    int row;
    int step;
    int max;
    int visible;
    int i;

    row = dir ? 0 : g_size - 1;
    step = dir ? 1 : -1;
    max = 0;
    visible = 0;
    i = 0;
    while (i < g_size)
    {
        if (grid[row][col]) > max)
        {
            max = grid[row][col];
            visible++;
        }
        row += step;
        i++;
    }
    return (visible)
}

int count_visible_row(int **grid, int row, int dir)
{
    int col;
    int step;
    int max;
    int visible;
    int i;

    col = dir ? 0 : g_size - 1;
    step = dir ? 1 : -1;
    max = 0;
    visible = 0;
    i = 0;
    while (i < g_size)
    {
        if (grid[row][col] > max)
        {
            max = grid[row][col];
            visible++;
        }
        col += step;
        i++;
    }
    return (visible);
}

// BRUTE FORCE TH' MUTHA!

int check_col_clue(int **grid, int **clues, int col)
{
    int i;
    int top;
    int bottom;

    i = 0;
    while (i < g_size)
    {
        if (grid[i][col] == 0)
            return (1); //Column not complete yet
            i++;
    }
    top = clues[0][col];
    bottom = clues[1][col];
    if (top && count_visible_col(grid, col, 1) != top)
        return (0);
    if (bottom && count_visible_col(grid, col, 0) != bottom)
        return (0);
        return (1);
}

int check_col_clue(int **grid, int **clues, int col)
{
	int i;
	int top;
	int bottom;

	i = 0;
	while (i < g_SIZE)
	{
		if (grid[i][col] == 0)
			return (1); // Column not complete yet
		i++;
	}
	top = clues[0][col];
	bottom = clues[1][col];
	if (top && count_visible_col(grid, col, 1) != top)
		return (0);
	if (bottom && count_visible_col(grid, col, 0) != bottom)
		return (0);
	return (1);
}

int check_row_clue(int **grid, int **clues, int row)
{
    int i;
    int left;
    int right;

    i=0;
    while (i < g_size)
    {
        if (grid[row][i] == 0)
            return (1); //Row not complete
        i++;
    }
    left = clues[2][row];
    right = clues[3][row];
    if (left && count_visible_row(grid, row, 1) != left)
        return (0);
    if (right && count_visible_row(grid, row, 0) != right)
        return (0);
        return (1);
    }
}

int ft_solve(int **grid, int **clues)
{
	int *stack = malloc(g_SIZE * g_SIZE * sizeof(int));
	int depth = 0;
	int row = 0;
	int col = 0;

	while (depth < SIZE * SIZE)
		stack[depth++] = 0;
	depth = 0;
	while (depth >= 0)
	{
		stack[depth]++;
		if (stack[depth] > SIZE)
		{
			stack[depth--] = 0;
			if (depth >= 0)
			{
				col = depth % g_size;
				row = depth / SIZE;
				grid[row][col] = 0;
			}
			continue;
		}
		row = depth / SIZE;
		col = depth % SIZE;
		if (is_unique(grid, row, col, stack[depth]) &&
			(grid[row][col] = stack[depth]) &&
			(col < SIZE - 1 || check_row_clue(grid, clues, row)) &&
			(row < SIZE - 1 || check_col_clue(grid, clues, col)))
			depth++;
	}
	free(stack);
	return (depth == SIZE * SIZE);
}