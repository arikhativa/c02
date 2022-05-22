/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:49:23 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/22 15:59:26 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BASE 16

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int n)
{
	if (n / BASE)
	{
		print_hex(n / BASE);
		print_hex(n % BASE);
	}
	if (n < 10)
		ft_putchar(n + '0');
	else if (n < 16)
		ft_putchar(n + 'a' - 10);
}

int	is_printable(char ch)
{
	return (ch > 32 && ch != 127);
}

void	ft_putstr_non_printable(char *str)
{
	if (!str)
		return ;
	while (*str)
	{
		if (!is_printable(*str))
		{
			ft_putchar('\\');
			ft_putchar('0');
			print_hex(*str);
		}
		else
			ft_putchar(*str);
		++str;
	}
}
