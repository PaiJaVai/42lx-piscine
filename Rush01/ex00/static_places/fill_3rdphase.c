/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_3rdphase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:26:27 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:53:57 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_3rdphase.h"
#include "../errors.h"
#include "../dynamic_places/autofill_2.h"
#include "../dynamic_places/autofill_3.h"
#include <stdlib.h>
#include <unistd.h>

void	view_31(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		matrix[fixed_index][3] = '4';
	}
	else if (row_column == 1)
	{
		matrix[3][fixed_index] = '4';
	}
	else
	{
		call_error();
	}
	fill_phase31(matrix, fixed_index, row_column);
}

void	view_13(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		matrix[fixed_index][0] = '4';
	}
	else if (row_column == 1)
	{
		matrix[0][fixed_index] = '4';
	}
	else
	{
		call_error();
	}
	fill_phase13(matrix, fixed_index, row_column);
}

void	fill_3rdph(char matrix[4][4], char col_rest[4][2], char row_rest[4][2])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col_rest[i][0] == '3' && col_rest[i][0] == '1')
		{
			view_31(matrix, i, 1);
		}
		if (col_rest[i][0] == '1' && col_rest[i][1] == '3')
		{
			view_13(matrix, i, 1);
		}
		if (row_rest[i][0] == '3' && row_rest[i][1] == '1')
		{
			view_31(matrix, i, 0);
		}
		if (row_rest[i][0] == '1' && row_rest[i][1] == '3')
		{
			view_13(matrix, i, 0);
		}
		i++;
	}
}
