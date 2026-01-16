/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:23:55 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/16 16:15:02 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_get_str_nbr(int ac, char *av[])
{
	char	*res;
	char	*temp;
	size_t	i;

	res = "";
	i = 1;
	while (i < (size_t)ac)
	{
		temp = res;
		res = ft_strjoin(res, av[i]);
		free(temp);
		temp = res;
		res = ft_strjoin(res, " ");
		free(temp);
		i++;
	}
	return (res);
}
