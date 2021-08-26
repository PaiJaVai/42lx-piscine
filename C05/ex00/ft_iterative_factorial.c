/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:26:09 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/20 12:22:46 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
	{
		n = (n * nb) + 1;
	}
	while (nb > 1)
	{
		n *= (nb - 1);
		nb--;
	}
	return (n);
}

/*int main(void)
{
	printf("%d", ft_iterative_factorial(1));
}*/
