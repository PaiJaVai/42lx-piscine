/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 21:41:01 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/16 23:11:33 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	c = 0;
	while (src[c])
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
	char dest[100] = "olhsadasdasda";
	char src[] = "e jaasdasd";

	printf("%s", ft_strcat(dest, src));
}*/
