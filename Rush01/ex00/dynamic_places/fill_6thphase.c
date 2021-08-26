/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_6thphase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 19:23:38 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:15:37 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	get_column_for_value(char matrix[4][4], char value)
{
	int	row;
	int	column;
	int	position;
	int	all;

	all = 0;
	column = 0;
	position = 0;
	while (column < 4)
	{
		row = 0;
		while (row < 4)
		{
			if (matrix[row][column] == value)
			{
				position += column;
				all++;
			}
			row++;
		}
		column++;
	}
	if (all == 3)
		return (6 - position);
	return (55);
}

int	get_row_for_value(char matrix[4][4], char value)
{
	int	row;
	int	column;
	int	position;
	int	all;

	all = 0;
	row = 0;
	position = 0;
	while (row < 4)
	{
		column = 0;
		while (column < 4)
		{
			if (matrix[row][column] == value)
			{
				position += row;
				all++;
			}
			column++;
		}
		row++;
	}
	if (all == 3)
		return (6 - position);
	return (55);
}

void	insert_value(char matrix[4][4], char value)
{
	int	row;
	int	column;

	row = get_row_for_value(matrix, value);
	column = get_column_for_value(matrix, value);
	if (row != 55)
	{
		if (column != 55)
		{
			if (matrix[row][column] == 48)
			{
				matrix[row][column] = value;
			}
		}
	}
}
