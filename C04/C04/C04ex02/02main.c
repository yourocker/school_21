/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medward <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:18:22 by medward           #+#    #+#             */
/*   Updated: 2021/03/10 17:51:03 by medward          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

int ft_putnbr(int nb);

int main(void)
{
	ft_putnbr(42);
	ft_putchar('\n');
	ft_putnbr(343253536);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
}