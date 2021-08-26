/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autofill_3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:12:44 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:51:07 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_phase13row(char matrix[4][4], int fixed_index)
{
	if (matrix[fixed_index][1] == 49)
	{
		matrix[fixed_index][2] = 51;
		matrix[fixed_index][3] = 50;
	}
	if (matrix[fixed_index][1] == 50)
	{
		matrix[fixed_index][2] = 51;
		matrix[fixed_index][3] = 49;
	}
	if (matrix[fixed_index][1] == 51)
	{
		matrix[fixed_index][2] = 49;
		matrix[fixed_index][3] = 50;
	}
}

void	fill_phase13(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		fill_phase13row(matrix, fixed_index);
	}
	else if (row_column == 1)
	{
		if (matrix[1][fixed_index] == 49)
		{
			matrix[2][fixed_index] = 51;
			matrix[3][fixed_index] = 50;
		}
		if (matrix[1][fixed_index] == 50)
		{
			matrix[2][fixed_index] = 51;
			matrix[3][fixed_index] = 49;
		}
		if (matrix[1][fixed_index] == 51)
		{
			matrix[2][fixed_index] = 49;
			matrix[3][fixed_index] = 50;
		}
	}
}

void	fill_phase32row(char matrix[4][4], int fixed_index)
{
	if (matrix[fixed_index][3] == 49)
	{
		matrix[fixed_index][0] = 50;
		matrix[fixed_index][1] = 51;
	}
	if (matrix[fixed_index][3] == 50)
	{
		matrix[fixed_index][0] = 49;
		matrix[fixed_index][1] = 51;
	}
	if (matrix[fixed_index][3] == 51)
	{
		matrix[fixed_index][0] = 49;
		matrix[fixed_index][1] = 50;
	}
}

void	fill_phase32(char matrix[4][4], int fixed_index, int row_column)
{
	if (row_column == 0)
	{
		fill_phase32row(matrix, fixed_index);
	}
	else if (row_column == 1)
	{
		if (matrix[3][fixed_index] == 49)
		{
			matrix[0][fixed_index] = 50;
			matrix[1][fixed_index] = 51;
		}
		if (matrix[3][fixed_index] == 50)
		{
			matrix[0][fixed_index] = 49;
			matrix[1][fixed_index] = 51;
		}
		if (matrix[3][fixed_index] == 51)
		{
			matrix[0][fixed_index] = 49;
			matrix[1][fixed_index] = 50;
		}
	}
}
