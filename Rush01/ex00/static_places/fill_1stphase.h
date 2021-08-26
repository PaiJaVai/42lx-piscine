/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_1stphase.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:24:44 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:28:28 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_1STPHASE_H
# define FILL_1STPHASE_H
# include <unistd.h>
# include <stdio.h>

void	view_14(char matrix[4][4], int fixed_index, int row_column);

void	view_41(char matrix[4][4], int fixed_index, int row_column);

void	fill_1ph(char matrix[4][4], char col_rest[4][2], char row_rest[4][2]);

#endif