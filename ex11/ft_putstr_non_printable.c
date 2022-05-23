/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 15:49:23 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/23 12:28:44 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BASE 16

void	ft_putchar(unsigned char c)
{
	write(1, &c, 1);
}

void	print_hex(unsigned char n)
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

int	is_printable(unsigned char ch)
{
	return (ch >= 32 && ch < 127);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	if (!s)
		return ;
	while (*s)
	{
		if (!is_printable(*s))
		{
			ft_putchar('\\');
			if (*s < 16)
				ft_putchar('0');
			print_hex(*s);
		}
		else
			ft_putchar(*s);
		++s;
	}
}
