/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alchrist <alchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:40:37 by alchrist          #+#    #+#             */
/*   Updated: 2021/03/21 22:03:01 by alchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/ft_list.h"

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n' && str[i] != ':')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*new_str;
	int		len_s;
	int		i;

	len_s = ft_strlen(src) + 1;
	new_str = malloc(sizeof(*new_str) * len_s);
	if (!new_str)
		return (new_str);
	i = 0;
	while (i < len_s - 1)
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = 0;
	return (new_str);
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
