/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 22:33:46 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/19 23:04:20 by bmiguel-         ###   ########.fr       */
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
	if (argc > 0)
	{
		ft_putstr(argv[0]);
	}
	write(1, "\n", 1);
}
