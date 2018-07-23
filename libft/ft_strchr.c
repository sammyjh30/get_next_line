/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:26:17 by shillebr          #+#    #+#             */
/*   Updated: 2018/05/24 14:08:42 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)str;
	while (ret[i] != '\0')
	{
		if (ret[i] == (unsigned char)c)
			return (ret + i);
		i++;
	}
	return (0);
}
