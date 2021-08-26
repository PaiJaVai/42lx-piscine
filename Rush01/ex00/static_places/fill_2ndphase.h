/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_2phase.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:26:00 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:32:07 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_2NDPHASE_H
# define FILL_2NDPHASE_H
# include <unistd.h>
# include <stdlib.h>

void	view_12(char matrix[4][4], int fixed_index, int row_column);

void	view_21(char matrix[4][4], int fixed_index, int row_column);

void	fill_2ph(char matrix[4][4], char col_rest[4][2], char row_rest[4][2]);

#endif