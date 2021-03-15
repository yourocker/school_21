/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medward <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 19:06:34 by medward           #+#    #+#             */
/*   Updated: 2021/03/07 19:32:49 by medward          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char	*str1;
	char	*str2;

	str1 = "qwertyui12111";
	str2 = "qwertyui12999";
	//printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
}
