/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:57:39 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/22 14:16:00 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lowercase(char ch)
{
	return (ch >= 'a' && ch <= 'z');
}

char	*ft_strupcase(char *str)
{
	char	*ret;

	ret = str;
	if (!str)
		return (ret);
	while (*str)
	{
		if (is_lowercase(*str))
			*str = *str - 32;
		++str;
	}
	return (ret);
}
