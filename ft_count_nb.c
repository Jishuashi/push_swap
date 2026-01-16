/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:21:17 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/16 21:36:12 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_nb(char *str)
{
	size_t	i;
	int		res;

	i = 1;
	res = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == ' ' || i == 0)
			res++;
		i++;
	}
	return (res);
}
