/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:57:39 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/20 15:08:56 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upcase(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

int	is_lower(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

int	is_num(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int	is_alphanumric(char ch)
{
	return (is_lower(ch) || is_upcase(ch) || is_num(ch));
}

char *ft_strcapitalize(char *str)
{
	char *ret;

	ret = str;
	if (!str)
		return (ret);
	while(*str && !is_alphanumric(*str))
		++str;
	while (*str)
	{
		if (is_lower(*str))
			*str = *str - 32;
		++str;
		while (*str && is_alphanumric(*str))
		{
			if (is_upcase(*str))
				*str = *str + 32;
			++str;
		}
		while(*str && !is_alphanumric(*str))
			++str;
	}
	return (ret);
}
