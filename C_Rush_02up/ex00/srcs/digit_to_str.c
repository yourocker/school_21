/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit_to_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alchrist <alchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:45:40 by alchrist          #+#    #+#             */
/*   Updated: 2021/03/21 22:10:41 by alchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "../includes/ft_list.h"

void	find_and_push_to_list(t_list *dict, t_list **lst_dig, char *str, int z)
{
	char	*val;

	if (*str != '0')
	{
		if (!(val = ft_list_find(dict, str, &ft_strcmp)))
			raise_error(2, "Dict Error", dict, *lst_dig);
		ft_list_push_front(lst_dig, " ", val);
	}
	if (z)
		str[0] = '0';
	else
		str[0] = '\0';
}

void	find_and_push_triada_name(t_list *dict, t_list **lst_dig, int size)
{
	int		i;
	char	key[size + 1];
	char	*val;

	key[0] = '1';
	key[size] = '\0';
	i = 1;
	while (i < size)
		key[i++] = '0';
	if (!(val = ft_list_find(dict, key, &ft_strcmp)))
		raise_error(2, "Dict Error", dict, *lst_dig);
	ft_list_push_front(lst_dig, " ", val);
}

void	fill_list_dig(t_list *dict, t_list **lst_dig, char *str, char *hundred)
{
	int		i;
	int		len;

	i = 1;
	len = ft_diglen(str);
	while (i <= len)
	{
		if (i > 3 && !all_three_zeros(str, len - i))
			find_and_push_triada_name(dict, lst_dig, i);
		if (len - (i + 1) >= 0)
			if (str[len - (i + 1)] == '1')
				find_and_push_to_list(dict, lst_dig, &str[len - (i + 1)], 0);
			else
			{
				find_and_push_to_list(dict, lst_dig, &str[len - i], 1);
				find_and_push_to_list(dict, lst_dig, &str[len - (i + 1)], 0);
			}
		else
			find_and_push_to_list(dict, lst_dig, &str[len - i], 0);
		if (len - (i + 2) >= 0 && str[len - (i + 2)] != '0')
			ft_list_push_front(lst_dig, " ", hundred);
		if (len - (i + 2) >= 0)
			find_and_push_to_list(dict, lst_dig, &str[len - (i + 2)], 0);
		i += 3;
	}
}

void	digit_to_str(t_list *dict, char *str)
{
	int		len;
	char	*hundred;
	char	*zero_val;
	t_list	*lst_dig;

	lst_dig = NULL;
	if (!(len = ft_diglen(str)))
		raise_error(2, "Error", dict, lst_dig);
	if (len > 2 && !(hundred = ft_list_find(dict, "100", &ft_strcmp)))
		raise_error(2, "Dict Error", dict, lst_dig);
	if (len == 1 && str[0] == '0')
		if (!(zero_val = ft_list_find(dict, "0", &ft_strcmp)))
			raise_error(2, "Dict Error", dict, lst_dig);
		else
			ft_list_push_front(&lst_dig, " ", zero_val);
	else
		fill_list_dig(dict, &lst_dig, str, hundred);
	print_list_dig(lst_dig);
	ft_list_clear(lst_dig);
}
