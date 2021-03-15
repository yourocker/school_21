/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medward <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:21:08 by medward           #+#    #+#             */
/*   Updated: 2021/03/09 16:09:23 by medward          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putstr(char *str);

int	ft_putchar(char c);

int		main(void)
	{
	int	c;
	char line[] = "ooo";
	c = ft_putstr(line);
	write (1, &c, 1);
	return(0);
	}
