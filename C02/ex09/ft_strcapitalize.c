/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 11:51:31 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/16 11:53:34 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_str_all_lowercase(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] >= 'A' && str[index] <= 'Z'))
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_str_all_lowercase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] < '0' || str [i - 1] > '9')
		{
			if (str [i - 1] < 'A' || str[i - 1] > 'Z')
			{
				if (str[i - 1] < 'a' || str[i - 1] > 'z')
				{
					if (str[i] >= 'a' && str[i] <= 'z')
					{
						str[i] = str[i] - 32;
					}
				}			
			}
		}
		i++;
	}
	return (str);
}

/*int main(void)
{
	char str[] = "salut, coMMent tu vas ? 42mots quarAnte-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", str);
}*/
