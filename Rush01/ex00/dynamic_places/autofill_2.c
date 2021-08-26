/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autofill_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:11:36 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:50:47 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../errors.h"
#include <unistd.h>
#include <stdlib.h>

void	fill_phase2row(char matrix[4][4], int fixed_index)
{
	if (matrix[fixed_index][2] == 49)
	{
		matrix[fixed_index][1] = 50;
	}
	if (matrix[fixed_index][1] == 49)
	{
		matrix[fixed_index][2] = 50;
	}
	if (matrix[fixed_index][2] == 50)
	{
		matrix[fixed_index][1] = 49;
	}
	if (matrix[fixed_index][1] == 50)
	{
		matrix[fixed_index][2] = 49;
	}
}

void	fill_phase2(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		fill_phase2row(matrix, fixed_index);
	}
	else if (row_column == 1)
	{
		if (matrix[2][fixed_index] == 49)
		{
			matrix[1][fixed_index] = 50;
		}
		if (matrix[1][fixed_index] == 49)
		{
			matrix[2][fixed_index] = 50;
		}
		if (matrix[2][fixed_index] == 50)
		{
			matrix[1][fixed_index] = 49;
		}
		if (matrix[1][fixed_index] == 50)
		{
			matrix[2][fixed_index] = 49;
		}
	}
}

void	fill_phase31row(char matrix[4][4], int fixed_index)
{
	if (matrix[fixed_index][2] == 51)
	{
		matrix[fixed_index][0] = 50;
		matrix[fixed_index][1] = 49;
	}
	if (matrix[fixed_index][2] == 49)
	{
		matrix[fixed_index][0] = 50;
		matrix[fixed_index][1] = 51;
	}
	if (matrix[fixed_index][2] == 50)
	{
		matrix[fixed_index][0] = 49;
		matrix[fixed_index][1] = 51;
	}
}

void	fill_phase31(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		fill_phase31row(matrix, fixed_index);
	}
	else if (row_column == 1)
	{
		if (matrix[2][fixed_index] == 51)
		{
			matrix[0][fixed_index] = 50;
			matrix[1][fixed_index] = 49;
		}
		if (matrix[2][fixed_index] == 49)
		{
			matrix[0][fixed_index] = 50;
			matrix[1][fixed_index] = 51;
		}
		if (matrix[2][fixed_index] == 50)
		{
			matrix[0][fixed_index] = 49;
			matrix[1][fixed_index] = 51;
		}
	}
}
