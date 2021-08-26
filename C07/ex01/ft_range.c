/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 23:02:41 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/22 23:46:53 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	size = max - min;
	array = (int *)malloc(size * sizeof (int));
	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*int main()
{
	int min = 2;
	int max = 10;
	int *array = ft_range(min, max);
	int i;

	for (i = 0; i < 8; i++)
		printf("%d", array[i]);
}*/
