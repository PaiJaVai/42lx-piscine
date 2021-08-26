/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiguel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 16:49:20 by bmiguel-          #+#    #+#             */
/*   Updated: 2021/08/09 10:58:22 by bmiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	start(int x)
{
	int	a;

	a = 1;
	if (x == 1)
	{
		ft_putchar('/');
	}
	else if (x > 1)
	{
		ft_putchar('/');
		while (a <= x - 2)
		{
			ft_putchar('*');
			a++;
		}
		ft_putchar('\\');
	}
}

void	middle(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b < y - 1)
	{
		a = 1;
		ft_putchar('\n');
		ft_putchar('*');
		if (x > 1)
		{
			while (a <= x - 2)
			{
				ft_putchar(' ');
				a++;
			}
			ft_putchar('*');
		}
		b++;
	}
}

void	end(int x)
{
	int	a;

	a = 1;
	ft_putchar('\n');
	if (x == 1)
	{
		ft_putchar('\\');
	}
	else if (x > 1)
	{
		ft_putchar('\\');
		while (a <= x - 2)
		{
			ft_putchar('*');
			a++;
		}
		ft_putchar('/');
	}
}

void	rush(int x, int y)
{
	if(x >= 1 && y >= 1)
	{
		start(x);
		if (y > 2)
		{
			middle(x, y);
		}
		if (y > 1)
		{
			end(x);
		}
		ft_putchar('\n');
	}
}
