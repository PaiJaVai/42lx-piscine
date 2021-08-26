/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcatarin <dcatarin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:28:50 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 23:20:44 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define	ERRORS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	call_error(void);
void	checkuserinput(char restrictions[31]);
int		ft_strlen(char *arg);

#endif
