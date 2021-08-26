/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:36:10 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/16 11:37:52 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 57 && str[i] >= 48))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char  str[] = "012345";

	ft_str_is_numeric(str);
	printf("%d", ft_str_is_numeric(str));
}*/
