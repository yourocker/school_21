/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alchrist <alchrist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:47:15 by alchrist          #+#    #+#             */
/*   Updated: 2021/03/21 22:20:41 by alchrist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "../includes/ft_list.h"

char	*strip_key(char *str, t_list *dict)
{
	int	i;

	i = 0;
	while (is_space(*str))
		str++;
	if (*str == '+' || *str == '-')
		str++;
	while (is_digit(str[i]))
		i++;
	if (i == 0)
		raise_error(2, "Dict Error", dict, NULL);
	str[i] = ':';
	return (str);
}

char	*strip_val(char *str, t_list *dict)
{
	int j;

	while (is_space(*str))
		str++;
	if (!*str || *str == '\n')
		raise_error(2, "Dict Error", dict, NULL);
	j = 0;
	while (str[j] && str[j] != '\n')
		j++;
	j--;
	while (is_space(str[j]))
		j--;
	if (str[j + 1] != '\n')
		str[j + 1] = ':';
	return (str);
}

void	parser_dict(int fd, t_list **dict)
{
	int		i;
	int		j;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if ((ret = read(fd, buf, BUF_SIZE)) == -1)
		raise_error(2, "Dict Error", *dict, NULL);
	buf[ret] = 0;
	i = -1;
	while (buf[++i])
	{
		if ((i == 0 || buf[i - 1] == '\n') && buf[i] != '\n')
		{
			j = i;
			while (buf[j] != ':' && buf[j] != 0 && buf[j] != '\n')
				j++;
			if (buf[j] == ':')
			{
				ft_list_push_front(dict, strip_key(&buf[i], *dict),
									strip_val(&buf[j + 1], *dict));
				i = j;
			}
		}
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	t_list	*dict;

	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	else if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		argv[1] = argv[2];
	}
	else
		exit(1);
	if (fd == -1)
		raise_error(2, "Dict Error", NULL, NULL);
	dict = NULL;
	parser_dict(fd, &dict);
	digit_to_str(dict, argv[1]);
	ft_list_clear(dict);
	close(fd);
	return (0);
}
