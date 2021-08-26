/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_4thphase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:36:21 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:54:09 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_4thphase.h"
#include "../dynamic_places/autofill_3.h"
#include "../dynamic_places/autofill_4.h"
#include "../errors.h"
#include <stdlib.h>
#include <unistd.h>

void	view_32(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		matrix[fixed_index][2] = '4';
	}
	else if (row_column == 1)
	{
		matrix[2][fixed_index] = '4';
	}
	else
	{
		call_error();
	}
	fill_phase32(matrix, fixed_index, row_column);
}

void	view_23(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		matrix[fixed_index][1] = '4';
	}
	else if (row_column == 1)
	{
		matrix[1][fixed_index] = '4';
	}
	else
	{
		call_error();
	}
	fill_phase23(matrix, fixed_index, row_column);
}

void	fill_4thph(char matrix[4][4], char col_rest[4][2], char row_rest[4][2])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col_rest[i][0] == '3' && col_rest[i][0] == '2')
		{
			view_32(matrix, i, 1);
		}
		if (col_rest[i][0] == '2' && col_rest[i][1] == '3')
		{
			view_23(matrix, i, 1);
		}
		if (row_rest[i][0] == '3' && row_rest[i][1] == '2')
		{
			view_32(matrix, i, 0);
		}
		if (row_rest[i][0] == '2' && row_rest[i][1] == '3')
		{
			view_23(matrix, i, 0);
		}
		i++;
	}
}
