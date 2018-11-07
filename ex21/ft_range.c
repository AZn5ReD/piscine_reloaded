/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:41:41 by jchirk            #+#    #+#             */
/*   Updated: 2018/11/07 10:54:28 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	len;

	if (min >= max)
		return NULL;
	len = max - min;
	if (!(ret = (int*)malloc(sizeof(int) * len)))
		return NULL;
	while (min < max)
	{
		*ret = min;
		ret++;
		min++;
	}
	return ret - len;
}
