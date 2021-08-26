/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:20:04 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/24 12:55:59 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_find_len(char *needle)
{
	int	n;

	n = 0;
	while (needle[n] != '\0')
		n++;
	return (n);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	find;
	int	find_len;

	i = 0;
	find_len = ft_find_len(to_find);
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			find = 0;
			while (find < find_len)
			{
				if (to_find[find] == str[i + find] && find == find_len - 1)
					return (&str[i]);
				else if (to_find[find] != str[i + find])
					find = find_len;
				find++;
			}
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char s1[] = "olha a bola manel";
	char s2[] = " a";

	printf("%s", ft_strstr(s1, s2));
}*/
