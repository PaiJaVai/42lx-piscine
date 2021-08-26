/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autofill_all.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:01:03 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 23:21:42 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "autofill_2.h"
#include "autofill_3.h"
#include "autofill_4.h"
#include "fill_6thphase.h"
#include "fill_7thphase.h"
#include "../print_matrix.h"
#include <stdio.h>

void	it_rest_ph4(char matrix[4][4], char col_rest[4][2], char row_rest[4][2])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col_rest[i][0] == '3' && col_rest[i][1] == '2')
		{
			fill_phase32(matrix, i, 1);
		}
		if (col_rest[i][0] == '2' && col_rest[i][1] == '3')
		{
			fill_phase23(matrix, i, 1);
		}
		if (row_rest[i][0] == '3' && row_rest[i][1] == '2')
		{
			fill_phase32(matrix, i, 0);
		}
		if (row_rest[i][0] == '2' && row_rest[i][1] == '3')
		{
			fill_phase23(matrix, i, 0);
		}
		i++;
	}
}

void	it_rest_ph3(char matrix[4][4], char col_rest[4][2], char row_rest[4][2])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col_rest[i][0] == '3' && col_rest[i][1] == '1')
		{
			fill_phase31(matrix, i, 1);
		}
		if (col_rest[i][0] == '1' && col_rest[i][1] == '3')
		{
			fill_phase13(matrix, i, 1);
		}
		if (row_rest[i][0] == '3' && row_rest[i][1] == '1')
		{
			fill_phase31(matrix, i, 0);
		}
		if (row_rest[i][0] == '1' && row_rest[i][1] == '3')
		{
			fill_phase13(matrix, i, 0);
		}
		i++;
	}
}

void	it_rest_ph2(char matrix[4][4], char col_rest[4][2], char row_rest[4][2])
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (col_rest[i][0] == '2' && col_rest[i][1] == '1')
		{
			fill_phase2(matrix, i, 1);
		}
		if (col_rest[i][0] == '1' && col_rest[i][1] == '2')
		{
			fill_phase2(matrix, i, 1);
		}
		if (row_rest[i][0] == '2' && row_rest[i][1] == '1')
		{
			fill_phase2(matrix, i, 0);
		}
		if (row_rest[i][0] == '1' && row_rest[i][1] == '2')
		{
			fill_phase2(matrix, i, 0);
		}
		i++;
	}
}

void	it_rest(char matrix[4][4], char col_rest[4][2], char row_rest[4][2])
{
	int	i;
	int	teste;

	i = 0;
	teste = 0;
	while (check_finish(matrix) == 1)
	{
		it_rest_ph2(matrix, col_rest, row_rest);
		it_rest_ph3(matrix, col_rest, row_rest);
		it_rest_ph4(matrix, col_rest, row_rest);
		teste = check_finish(matrix);
		insert_value(matrix, '4');
		if (i > 1 )
		{
			insert_value(matrix, '3');
			insert_value(matrix, '2');
			insert_value(matrix, '1');
			insert_value_bySum(matrix);
		}
		i++;
	}
}
