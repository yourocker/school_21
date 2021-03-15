/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medward <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 21:05:55 by medward           #+#    #+#             */
/*   Updated: 2021/03/07 21:36:24 by medward          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[50] = "sobaka";
	char	*src;

	src = "blablalba";
	printf("%s\n", ft_strcat(dest, src));
	printf("%s\n", ft_strcat(dest, src));
}
