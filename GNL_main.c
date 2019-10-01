/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GNL_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:56:09 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/01/02 15:02:53 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include "libft/libft.h"

int	main(int ac, char **av)
{
int			fd;
char		*line;
int			ret;

line = NULL;

if (ac < 2)
	{
		ft_putendl("no entry");
		return (0);
	}

	fd = open(av[1], O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("%s\n", line);
		ft_strdel(&line);
	}
	close(fd);
	printf("%d", ret);
return(0);
}
