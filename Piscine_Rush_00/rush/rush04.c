/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medward <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:41:38 by medward           #+#    #+#             */
/*   Updated: 2021/03/07 11:00:59 by medward          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_l(int w, char s, char m, char e)
{
	int	i;

	i = 1;
	while(i <= w)
	{
		if(i == 1)
			ft_putchar(s);
		if(i <= (w -1))
			ft_putchar(m);
		if(i == w)
			ft_putchar(e);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	while(i <= y)
	{
		if (i == 1)
			ft_l(x, 'A', 'B', 'C');
		if (i <= (y-1))
			ft_l(x, 'B', ' ', 'B');
		if (i == y)
			ft_l(x, 'C', 'B', 'A');
		ft_putchar('\n');
		i++;
	}
}

int main()
{
	rush(1, 1);
	return (0);
}



