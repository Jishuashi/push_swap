/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_tab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:23:04 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/26 15:01:42 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		get_pos(long *stack, long nb, int nb_nb);
static long		*ft_index(long *stack, long *dest, long min, int nb_nb);

long	*index_tab(long *stack, int nb_nb)
{
	long	min;
	long	*res;

	res = (long *)malloc(sizeof(long) * nb_nb);
	if (!res)
		return (NULL);
	min = 2147483648;
	res = ft_index(stack, res, min, nb_nb);
	free(stack);
	return (res);
}

static	long	*ft_index(long *stack, long *dest, long min, int nb_nb)
{
	int		i;
	int		j;
	int		pos;

	i = 1;
	while (i <= nb_nb)
	{
		j = 0;
		while (j < nb_nb)
		{
			if (min > stack[j])
				min = stack[j];
			j++;
		}
		pos = get_pos(stack, min, nb_nb);
		dest[pos] = i;
		stack[pos] = 2147483648;
		min = 2147483648;
		i++;
	}
	return (dest);
}

static int	get_pos(long *stack, long nb, int nb_nb)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < nb_nb)
	{
		if (stack[i] == nb)
			break ;
		i++;
	}
	res = i;
	return (res);
}
