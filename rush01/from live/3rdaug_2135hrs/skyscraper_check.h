/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper_check.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thtay <thtay@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 17:20:00 by thtay             #+#    #+#             */
/*   Updated: 2025/08/03 17:26:17 by thtay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SKYSCRAPER_CHECK_H
# define SKYSCRAPER_CHECK_H

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

#endif