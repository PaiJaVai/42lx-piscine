/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 14:39:31 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 23:03:19 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "restrictions.h"
#include "static_places/fill_1stphase.h"
#include "static_places/fill_2ndphase.h"
#include "static_places/fill_3rdphase.h"
#include "static_places/fill_4thphase.h"
#include "dynamic_places/fill_5thphase.h"
#include "dynamic_places/autofill_all.h"
#include "errors.h"
#include <stdio.h>

void	initialize_gamematrix(char matrix[4][4]);
void	print_gamematrix(char matrix[4][4]);
int		ft_strlen(char *arg);
void	call_error(void);

char	g_matrix[4][4] = {};
char	g_col_rest[4][2] = {};
char	g_row_rest[4][2] = {};

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_strlen(argv[1]) == 31)
		{
			in_rest(argv[1], g_col_rest, g_row_rest);
			initialize_gamematrix(g_matrix);
			fill_1ph(g_matrix, g_col_rest, g_row_rest);
			fill_2ph(g_matrix, g_col_rest, g_row_rest);
			fill_3rdph(g_matrix, g_col_rest, g_row_rest);
			fill_4thph(g_matrix, g_col_rest, g_row_rest);
			fill_matrixgame_fifthphase(g_matrix);
			it_rest(g_matrix, g_col_rest, g_row_rest);
		}
		else
		{
			call_error();
		}
	}
	else
	{
		call_error();
	}
	return (0);
}
