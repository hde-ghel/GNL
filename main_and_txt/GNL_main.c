/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GNL_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:56:09 by hde-ghel          #+#    #+#             */
/*   Updated: 2019/04/20 14:49:24 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int	main()
		//int ac, char **av)
{
int			fd;
char		*line;
int			ret;

line = NULL;
/*
if (ac < 2)
	{
		ft_putendl("no entry");
		return (0);
	}
	*/
//while(1)
//{
	fd = open("/Users/hde-ghel/Desktop/cursus_19/GNL/test", O_RDONLY);
	while ((ret = get_next_line(fd, &line)) == 1)
	{
		printf("%s\n", line);
		ft_strdel(&line);
	}
	close(fd);
//}
printf("end");
return(0);
}
