/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alchrist <alchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:17:07 by alchrist          #+#    #+#             */
/*   Updated: 2021/03/21 22:08:34 by alchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# define BUF_SIZE 1000000

typedef struct	s_list
{
	struct s_list	*next;
	char			*key;
	char			*val;
}				t_list;

t_list			*ft_create_elem(char *key, char *val);
void			ft_list_push_front(t_list **begin_list, char *key, char *val);
void			ft_list_clear(t_list *begin_list);
char			*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)());
void			print_list_dig(t_list *lst);

void			digit_to_str(t_list *dict, char *str);
void			ft_putstr_out(int fd, char *str);
void			raise_error(int fd, char *str, t_list *dict, t_list *lst_dig);
char			*ft_strdup(char *src);
int				all_three_zeros(char *str, int ind);
int				ft_strlen(char *str);
int				ft_diglen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				is_digit(char ch);
int				is_space(char ch);

#endif
