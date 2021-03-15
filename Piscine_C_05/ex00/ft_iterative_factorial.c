/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medward <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 17:54:50 by medward           #+#    #+#             */
/*   Updated: 2021/03/10 22:55:35 by medward          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;

	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	i = nb--;
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}
