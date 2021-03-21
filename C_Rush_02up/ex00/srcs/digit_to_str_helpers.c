/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_to_str_helpers.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alchrist <alchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:45:40 by alchrist          #+#    #+#             */
/*   Updated: 2021/03/21 22:07:49 by alchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../includes/ft_list.h"

int		ft_diglen(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '+')
	{
		str[0] = '0';
		i++;
		if (!str[i])
			return (0);
	}
	while (str[i] && is_digit(str[i]))
		i++;
	if (str[i])
		return (0);
	return (i);
}

void	ft_putstr_out(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(fd, str, i);
}

void	raise_error(int fd, char *str, t_list *dict, t_list *lst_dig)
{
	ft_putstr_out(fd, str);
	ft_putstr_out(fd, "\n");
	if (dict)
		ft_list_clear(dict);
	if (lst_dig)
		ft_list_clear(lst_dig);
	exit(1);
}

int		all_three_zeros(char *str, int ind)
{
	int	i;

	i = 0;
	while (i < 3 && ind - i >= 0)
		if (str[ind - i++] != '0')
			return (0);
	return (1);
}
