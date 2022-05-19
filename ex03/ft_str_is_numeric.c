/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:49:05 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/19 12:28:04 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char ch)
{
	return (ch >= '0' && ch <= '9');
}

int ft_str_is_numeric(char *str)
{
	if (!str)
		return (1);
	while (*str)
	{
		if (!is_number(*str))
			return 0;
		++str;
	}
	return (1);
}