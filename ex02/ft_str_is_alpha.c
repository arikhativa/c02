/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:49:05 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/19 12:24:08 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char ch)
{
	return ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'));
}

int ft_str_is_alpha(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_alpha(*str))
			return 0;
		++str;
	}
	return (1);
}