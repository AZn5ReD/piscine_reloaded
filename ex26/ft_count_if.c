/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:04:30 by jchirk            #+#    #+#             */
/*   Updated: 2018/11/20 14:41:49 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	ret;

	i = -1;
	ret = 0;
	while (tab[++i] != 0)
		if (f(tab[i]) == 1)
			ret++;
	return (ret);
}
