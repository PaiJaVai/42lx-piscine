/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_2phase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:25:20 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:53:36 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../errors.h"
#include "../dynamic_places/autofill_2.h"
#include <unistd.h>
#include <stdlib.h>

void	view_21(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		matrix[fixed_index][0] = '3';
		matrix[fixed_index][3] = '4';
	}
	else if (row_column == 1)
	{
		matrix[0][fixed_index] = '3';
		matrix[3][fixed_index] = '4';
	}
	else
	{
		call_error();
	}
	fill_phase2(matrix, fixed_index, row_column);
}

void	view_12(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		matrix[fixed_index][0] = '4';
		matrix[fixed_index][3] = '3';
	}
	else if (row_column == 1)
	{
		matrix[0][fixed_index] = '4';
		matrix[3][fixed_index] = '3';
	}
	else
	{
		call_error();
	}
	fill_phase2(matrix, fixed_index, row_column);
}

void	fill_2ph(char matrix[4][4], char column_rest[4][2], char row_rest[4][2])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (column_rest[i][0] == '2' && column_rest[i][1] == '1')
		{
			view_21(matrix, i, 1);
		}
		if (column_rest[i][0] == '1' && column_rest[i][1] == '2')
		{
			view_12(matrix, i, 1);
		}
		if (row_rest[i][0] == '2' && row_rest[i][1] == '1')
		{
			view_21(matrix, i, 0);
		}
		if (row_rest[i][0] == '1' && row_rest[i][1] == '2')
		{
			view_12(matrix, i, 0);
		}
		i++;
	}
}
