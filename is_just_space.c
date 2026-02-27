/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_just_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 18:52:44 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/27 19:00:13 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_just_space(char *str)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] != ' ' || str[i] == '\t')
			return (0);
		i++;
	}
	return (1);
}
