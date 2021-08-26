/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autofill_3.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 17:13:28 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:18:38 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AUTOFILL_3_H
# define AUTOFILL_3_H

void	fill_phase13row(char matrix[4][4], int fixed_index);
void	fill_phase13(char matrix[4][4], int fixed_index, int row_column);
void	fill_phase32row(char matrix[4][4], int fixed_index);
void	fill_phase32(char matrix[4][4], int fixed_index, int row_column);

#endif