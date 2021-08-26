/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_7thphase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 20:48:44 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:59:20 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	insert_value_for_row(char matrix[4][4], int row, char value)
{
	int	column;

	column = 0;
	while (column < 4)
	{
		if (matrix[row][column] == 48)
		{
			matrix[row][column] = value;
		}
		column++;
	}
}

char	get_value_missing_inrow(char matrix[4][4], int row)
{
	int		column;
	int		value;
	int		all;

	all = 0;
	value = 0;
	column = 0;
	while (column < 4)
	{
		if (matrix[row][column] != 48)
		{
			value += matrix[row][column] - 48;
			all++;
		}
		column++;
	}
	if (all == 3)
	{
		return (58 - value);
	}
	return (55);
}

void	insert_value_bySum(char matrix[4][4])
{
	int		row;
	char	value;

	row = 0;
	while (row < 4)
	{
		value = get_value_missing_inrow(matrix, row);
		if (value != 55)
		{
			insert_value_for_row(matrix, row, value);
		}
		row++;
	}
}
