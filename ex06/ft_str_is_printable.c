/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:45:10 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/19 15:49:37 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_printable(char ch)
{
	return (ch >= 33 && ch <= 126);
}

int ft_str_is_printable(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_printable(*str))
			return 0;
		++str;
	}
	return (1);
}
