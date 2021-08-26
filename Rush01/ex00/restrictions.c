/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   restrictions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 20:36:52 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:50:20 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "restrictions.h"
#include "errors.h"
#include <stdio.h>
#include <unistd.h>

void	in_rest(char restriction[31], char col_rest[4][2], char row_rest[4][2])
{
	int	index;
	int	row;
	int	column;

	index = 0;
	row = 0;
	column = 0;
	checkuserinput(restriction);
	while (index < 23)
	{
		if (index <= 8)
		{
			col_rest[column][0] = restriction[index];
			col_rest[column++][1] = restriction[index + 8];
		}
		else if (index >= 16)
		{
			row_rest[row][0] = restriction[index];
			row_rest[row++][1] = restriction[index + 8];
		}
		index = index + 2;
	}
}
