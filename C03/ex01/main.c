/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medward <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:48:21 by medward           #+#    #+#             */
/*   Updated: 2021/03/07 21:00:01 by medward          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char *s1;
	char *s2;

	s1 = "qwerty";
	s2 = "qwertysflksd21312";
	printf("%d\n", ft_strncmp(s1, s2, 1));
	printf("%d\n", ft_strncmp(s1, s2, 0));

}
