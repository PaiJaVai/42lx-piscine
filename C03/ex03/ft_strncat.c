/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:11:24 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/17 16:31:39 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	c = 0;
	while (src[c] && c < nb)
	{
		dest[i] = src[c];
		c++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main(void)
{
	char dest[] = "fugiu";
	char src[] = "corre";

	printf("%s", ft_strncat(dest, src, 3));
}*/
