/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autofill_2.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 16:19:24 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:18:42 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUTOFILL_2_H
# define AUTOFILL_2_H
# include <unistd.h>
# include <stdlib.h>

void	fill_phase2row(char matrix[4][4], int fixed_index);
void	fill_phase2(char matrix[4][4], int fixed_index, int row_column);
void	fill_phase31row(char matrix[4][4], int fixed_index);
void	fill_phase31(char matrix[4][4], int fixed_index, int row_column);

#endif