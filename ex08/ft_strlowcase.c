/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:57:39 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/22 14:16:09 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_upcase(char ch)
{
	return (ch >= 'A' && ch <= 'Z');
}

char	*ft_strlowcase(char *str)
{
	char	*ret;

	ret = str;
	if (!str)
		return (ret);
	while (*str)
	{
		if (is_upcase(*str))
			*str = *str + 32;
		++str;
	}
	return (ret);
}
