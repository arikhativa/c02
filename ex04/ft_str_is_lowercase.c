/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:49:05 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/19 12:31:20 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int ft_str_is_lowercase(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_lowercase(*str))
			return 0;
		++str;
	}
	return (1);
}