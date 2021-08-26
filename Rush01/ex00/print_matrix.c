/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:27:13 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 23:03:10 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print_matrix.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	initialize_gamematrix(char matrix[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			matrix[row][column] = '0';
			column++;
		}
		row++;
	}
}

void	print_gamematrix(char matrix[4][4])
{
	int	row;
	int	column;

	row = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 3)
		{
			write(1, &matrix[row][column], 1);
			write(1, " ", 1);
			column++;
		}
		write(1, &matrix[row][column], 1);
		write(1, "\n", 1);
		row++;
	}
}

int	check_finish(char matrix[4][4])
{
	int	row;
	int	column;
	int	finish;

	row = 0;
	finish = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			if (matrix[row][column] == '0')
				finish = 1;
			column++;
		}
		row++;
	}
	if (finish == 0)
	{
		print_gamematrix(matrix);
		exit (0);
	}
	return (finish);
}
