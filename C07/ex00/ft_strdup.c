/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 13:34:58 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/22 23:02:05 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;

	i = 0;
	while (src[i])
		i++;
	new = (char *)malloc(sizeof (*src) + (i + 1));
	ft_strcpy(new, src);
	return (new);
}

/*#include <stdio.h>
int main()
{
	char str[] = "ola valete, o meu nome e vanessa";
	
	char *new;
	new = ft_strdup(str);

	printf("%p__%p\n", str, new); 
	printf("%s\n", new);
}*/
