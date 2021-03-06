/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hde-ghel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 19:20:59 by hde-ghel          #+#    #+#             */
/*   Updated: 2018/11/27 19:24:22 by hde-ghel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_freetab(char **tab, int k)
{
	while (k--)
		free(tab[k]);
	free(tab);
	return (NULL);
}
