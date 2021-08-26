/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_4thphase.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:43:13 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:39:48 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_4THPHASE_H
# define FILL_4THPHASE_H
# include <stdlib.h>
# include <unistd.h>
// functions declaration

void	view_32(char matrix[4][4], int fixed_index, int row_column);

void	view_23(char matrix[4][4], int fixed_index, int row_column);

void	fill_4thph(char matrix[4][4], char col_rest[4][2], char row_rest[4][2]);

#endif