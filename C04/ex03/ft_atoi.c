/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:25:02 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/21 17:21:36 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	minus;

	i = 0;
	minus = 1;
	nb = 0;
	while (str[i] == '\f' || str[i] == '\r' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\t' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * minus);
}

int main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_atoi(argv[1]));
}
