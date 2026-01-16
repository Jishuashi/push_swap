/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:23:55 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/16 15:25:44 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_get_str_nbr(int ac, char *av[])
{
	char	*res;
	size_t	i;

	res = "";
	i = 1;
	while (i < (size_t)ac)
	{
		res = ft_strjoin(res, av[i]);
		res = ft_strjoin(res, " ");
		i++;
	}
	return (res);
}