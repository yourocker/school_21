/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alchrist <alchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:12:06 by alchrist          #+#    #+#             */
/*   Updated: 2021/03/21 20:48:03 by alchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(char *key, char *val)
{
	t_list	*elem;

	if (!(elem = malloc(sizeof(*elem))))
		return (NULL);
	elem->key = key;
	elem->val = val;
	elem->next = NULL;
	return (elem);
}

void	ft_list_push_front(t_list **begin_list, char *key, char *val)
{
	t_list		*new_elem;

	new_elem = ft_create_elem(ft_strdup(key), ft_strdup(val));
	new_elem->next = *begin_list;
	*begin_list = new_elem;
}

char	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while (begin_list)
	{
		if (!(cmp(begin_list->key, data_ref)))
			return (begin_list->val);
		begin_list = begin_list->next;
	}
	return (NULL);
}

void	ft_list_clear(t_list *begin_list)
{
	t_list	*next_elem;

	while (begin_list)
	{
		next_elem = begin_list->next;
		free(begin_list->key);
		free(begin_list->val);
		free(begin_list);
		begin_list = next_elem;
	}
}

void	print_list_dig(t_list *lst)
{
	while (lst)
	{
		ft_putstr_out(1, lst->val);
		if (lst->next)
			ft_putstr_out(1, lst->key);
		else
			ft_putstr_out(1, "\n");
		lst = lst->next;
	}
}
