/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:49:05 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/22 14:15:31 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	ft_str_is_uppercase(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_uppercase(*str))
			return (0);
		++str;
	}
	return (1);
}
