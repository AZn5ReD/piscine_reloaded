/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchirk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:38:16 by jchirk            #+#    #+#             */
/*   Updated: 2018/11/07 12:56:51 by jchirk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(char *file)
{
	int	fd;
	char	buf[2];

	buf[1] = 0;
	if ((fd = open(file, O_RDONLY)) == -1)
		return ;
	while (read(fd, buf, 1) > 0)
		ft_putstr(buf);
	close(fd);
}
