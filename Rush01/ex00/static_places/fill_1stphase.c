/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_1stphase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:24:17 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:53:13 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_1stphase.h"
#include "../errors.h"
#include <unistd.h>
#include <stdio.h>

void	view_14(char matrix[4][4], int fixed_index, int row_column)
{
	int	i;

	i = 0;
	if (row_column == 0)
	{
		while (i < 4)
		{
			matrix[fixed_index][i] = 52 - i;
			i++;
		}
	}
	else if (row_column == 1)
	{
		while (i < 4)
		{
			matrix[i][fixed_index] = 52 - i;
			i++;
		}
	}
	else
	{
		write(1, "Error", 5);
	}
}

void	view_41(char matrix[4][4], int fixed_index, int row_column)
{
	int	i;

	i = 0;
	if (row_column == 0)
	{
		while (i < 4)
		{
			matrix[fixed_index][i] = 49 + i;
			i++;
		}
	}
	else if (row_column == 1)
	{
		while (i < 4)
		{
			matrix[i][fixed_index] = 49 + i;
			i++;
		}
	}
	else
	{
		write(1, "Error", 5);
	}
}

void	fill_1ph(char matrix[4][4], char col_rest[4][2], char row_rest[4][2])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col_rest[i][0] == '4')
		{
			view_41(matrix, i, 1);
		}
		if (col_rest[i][1] == '4')
		{
			view_14(matrix, i, 1);
		}
		if (row_rest[i][0] == '4')
		{
			view_41(matrix, i, 0);
		}
		if (row_rest[i][1] == '4')
		{
			view_14(matrix, i, 0);
		}
		i++;
	}
}
