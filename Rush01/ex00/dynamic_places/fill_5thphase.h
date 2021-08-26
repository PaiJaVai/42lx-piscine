/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_5thphase.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcatarin <dcatarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 13:39:27 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 22:02:55 by dcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_5THPHASE_H
# define FILL_5THPHASE_H
# include <stdio.h>
void	insert_4(char matrix[4][4], int row_without4, int column_without4);
int		check_column_for4(char matrix[4][4]);
int		check_row_for4(char matrix[4][4]);
void	fill_matrixgame_fifthphase(char matrix[4][4]);
#endif