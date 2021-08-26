/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_3rdphase.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:30:01 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:33:02 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_3RDPHASE_H
# define FILL_3RDPHASE_H
# include <stdlib.h>
# include <unistd.h>

void	view_12(char matrix[4][4], int fixed_index, int row_column);

void	view_21(char matrix[4][4], int fixed_index, int row_column);

void	fill_3rdph(char matrix[4][4], char col_rest[4][2], char row_rest[4][2]);

#endif