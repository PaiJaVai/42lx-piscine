/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgil-per <cgil-per@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 12:28:21 by cgil-per          #+#    #+#             */
/*   Updated: 2021/08/15 23:38:27 by dcatarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "errors.h"

void	call_error(void)
{
	write(1, "Error", 5);
	exit (1);
}

void	checkuserinput(char restrictions[31])
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (restrictions[i] < 49 || restrictions[i] > 52)
		{
			call_error();
		}
		i++;
		if (i < 31 && restrictions[i] != 32)
		{
			call_error();
		}
		i++;
	}
}

int	ft_strlen(char *arg)
{
	int	size;

	size = 0;
	while (arg[size])
	{
		size++;
	}
	return (size);
}
