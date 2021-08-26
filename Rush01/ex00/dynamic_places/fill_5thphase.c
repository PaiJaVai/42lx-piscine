/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_5thphase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:59:22 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:51:47 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill_5thphase.h"
#include "../print_matrix.h"
#include <stdio.h>

/* Fill 4 if there's a 4 to fill*/

void	insert_4(char matrix[4][4], int row_without4, int column_without4)
{
	if (matrix[row_without4][column_without4] == 48)
	{
		matrix[row_without4][column_without4] = 52;
	}
}

int	check_column_for4(char matrix[4][4])
{
	int	i;
	int	j;
	int	has4;
	int	column_without4;

	j = 0;
	while (j < 4)
	{
		i = 0;
		has4 = 0;
		while (i < 4)
		{
			if (matrix[i][j] == 52)
				has4 = 1;
			i++;
		}
		if (has4 == 0)
		{
			column_without4 = j;
			return (column_without4);
		}
		j++;
	}
	return (55);
}

int	check_row_for4(char matrix[4][4])
{
	int	i;
	int	j;
	int	has4;
	int	row_without4;

	i = 0;
	while (i < 4)
	{
		j = 0;
		has4 = 0;
		while (j < 4)
		{
			if (matrix[i][j] == 52)
				has4 = 1;
			j++;
		}
		if (has4 == 0)
		{
			row_without4 = i;
			return (row_without4);
		}
		i++;
	}
	return (55);
}

void	fill_matrixgame_fifthphase(char matrix[4][4])
{
	int	row_without4;
	int	column_without4;

	row_without4 = check_row_for4(matrix);
	column_without4 = check_column_for4(matrix);
	if (row_without4 != 55 || column_without4 != 55)
	{
		insert_4(matrix, row_without4, column_without4);
	}
}
