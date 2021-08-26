/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:27:38 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:22:13 by cgil-per         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_MATRIX_H
# define	PRINT_MATRIX_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void	initialize_gamematrix(char matrix[4][4]);
void	print_gamematrix(char matrix[4][4]);
int		check_finish(char matrix[4][4]);

#endif