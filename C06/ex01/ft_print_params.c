/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 23:04:41 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/19 23:17:27 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (argc > 0 && argv[i] != (void *)0)
	{
		ft_putstr(argv[i]);
		i++;
		write(1, "\n", 1);
	}
}
