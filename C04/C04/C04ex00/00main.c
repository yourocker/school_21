/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medward <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:10:17 by medward           #+#    #+#             */
/*   Updated: 2021/03/08 17:32:16 by medward          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int		ft_strlen(char *str);

int		main (void)
	{
	int		z;
	char line[] = "12340";
	z = ft_strlen(line);
	printf ("%d", z);	
	return(0);
	}