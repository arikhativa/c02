/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:32:13 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/22 14:13:48 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#define BASE 16

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnstr(char *str, int n)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (i < n && *str)
	{
		if (*str >= 32 && *str != 127)
			ft_putchar(*str);
		else
			ft_putchar('.');
		++i;
		++str;
	}
}

void	print_hex(unsigned long n)
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

int	print_char_as_hex(char *s, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (s[i] && i < size && i < 16)
	{
		if (s[i] < BASE)
			ft_putchar('0');
		print_hex(s[i]);
		if ((i + 1) % 2 == 0)
			ft_putchar(' ');
		++i;
	}
	j = i;
	while (j < 16)
	{
		ft_putchar(' ');
		ft_putchar(' ');
		if ((j + 1) % 2 == 0)
			ft_putchar(' ');
		++j;
	}
	return (i);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*s;
	unsigned int	i;

	s = addr;
	while (size > 0)
	{
		print_hex((unsigned long)s);
		ft_putchar(':');
		ft_putchar(' ');
		i = print_char_as_hex(s, size);
		ft_putnstr(s, i);
		ft_putchar('\n');
		size -= i;
		s += i;
	}
	return (addr);
}
