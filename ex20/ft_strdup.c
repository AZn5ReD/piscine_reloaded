/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:33:04 by jchirk            #+#    #+#             */
/*   Updated: 2018/11/20 14:40:39 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (*src)
	{
		src++;
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*ret;

	len = ft_strlen(src);
	if (!(ret = (char*)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (*src)
	{
		*ret = *src;
		ret++;
		src++;
	}
	*ret = 0;
	return (ret - len);
}
