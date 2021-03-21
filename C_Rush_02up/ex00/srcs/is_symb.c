/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_symb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alchrist <alchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:36:36 by alchrist          #+#    #+#             */
/*   Updated: 2021/03/21 22:03:20 by alchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"

int	is_digit(char ch)
{
	if (ch < '0' || ch > '9')
		return (0);
	return (1);
}

int	is_space(char ch)
{
	if (ch == 9 || (ch > 10 && ch <= 13) || ch == ' ')
		return (1);
	return (0);
}
