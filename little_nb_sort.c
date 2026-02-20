/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_nb_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:47:02 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/20 05:33:07 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	*sort_three(long *a, int nb_nb);
static long	*sort_five_four(long *a, long *b, int nb_nb);
static int	get_index_min(long *stack, int len);
static long	*check_sort(long *a, long *b, int nb_nb);

long	*little_nb_sort(long *a, long *b, char *str, int nb_nb)
{
	long	*index_stack;

	index_stack = index_tab(a, nb_nb);
	if (!index_stack)
	{
		free(str);
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	a = check_sort(index_stack, b, nb_nb);
	return (a);
}

static long	*check_sort(long *a, long *b, int nb_nb)
{
	if (nb_nb == 2)
	{
		if (!is_sorted(a, nb_nb))
			ft_printf("%s", rotate_stack(a, 'a', nb_nb));
	}
	else if (nb_nb == 3)
	{
		if (!is_sorted(a, nb_nb))
			sort_three(a, nb_nb);
	}
	else
	{
		if (!is_sorted(a, nb_nb))
			sort_five_four(a, b, nb_nb);
	}
	return (a);
}

static long	*sort_three(long *a, int nb_nb)
{
	if (a[0] > a[1] && a[0] > a[2])
		ft_printf("%s", rotate_stack(a, 'a', nb_nb));
	else if (a[1] > a[0] && a[1] > a[2])
		ft_printf("%s", rrotate_stack(a, 'a', nb_nb));
	if (a[0] > a[1])
		ft_printf("%s", swap_stack('a', a));
	return (a);
}

static long	*sort_five_four(long *a, long *b, int nb_nb)
{
	int	len;

	len = nb_nb;
	while (len != 3)
	{
		while (get_index_min(a, len) != 0)
		{
			if (get_index_min(a, len) > (len / 2))
				ft_printf("%s", rrotate_stack(a, 'a', len));
			else
				ft_printf("%s", rotate_stack(a, 'a', len));
		}
		ft_printf("%s", push_stack(a, b, 'b', len));
		len--;
	}
	a = sort_three(a, len);
	while (b[0] != NULL_INT)
		ft_printf("%s", push_stack(b, a, 'a', nb_nb));
	return (a);
}

static int	get_index_min(long *stack, int len)
{
	int	min;
	int	i;

	min = stack[0];
	i = 0;
	while (i < len)
	{
		if (min > stack[i])
			min = stack[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		if (stack[i] == min)
			break ;
		i++;
	}
	return (i);
}
