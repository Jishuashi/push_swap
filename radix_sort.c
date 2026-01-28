/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 12:19:25 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/26 16:44:56 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init(int *max, int *i, int *bit);
static long	*ft_sort(long *a, long *b, int nb_nb, int max);
static int	is_sorted(long *tab, int nb_nb);
static int	is_empty(long *stack, int nb_nb);


long	*radix_sort(long *a, long *b, int nb_nb)
{
	int	max;

	a = index_tab(a, nb_nb);
	if (!a)
		return (NULL);
	max = nb_nb;
	if (is_sorted(a, nb_nb) == 1)
		return (a);
	a = ft_sort(a, b, nb_nb, max);
	return (a);
}

static long	*ft_sort(long *a, long *b, int nb_nb, int max)
{
	int	i;
	int	j;
	int	bit;
	int	len;

	init(&max, &i, &bit);
	while (i < bit)
	{
		j = 0;
		len = getlen_stack(a, nb_nb) - 1;
		while (j < len)
		{
			if ((a[0] >> i) & 1)
				ft_printf("%s", rotate_stack(a, 'a', nb_nb));
			else
				ft_printf("%s", push_stack(a, b, 'b', nb_nb));
			j++;
		}
		while (!is_empty(b, nb_nb))
			ft_printf("%s", push_stack(b, a, 'a', nb_nb));
		i++;
		if (is_sorted(a, nb_nb))
			return (a);
	}
	return (a);
}


static int	is_sorted(long *tab, int nb_nb)
{
	int	i;
	int	j;

	i = 0;
	while (i < nb_nb)
	{
		j = i;
		while (j < nb_nb)
		{
			if (tab[i] > tab[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

static void	init(int *max, int *i, int *bit)
{
	*i = 0;
	*bit = 0;
	while ((*max) >> (*bit) != 0)
		(*bit)++;
}

static int	is_empty(long *stack, int nb_nb)
{
	int	i;

	i = 0;
	while (i < nb_nb)
	{
		if (stack[i] > INT_MIN && stack[i] < INT_MAX)
			return (0);
		i++;
	}
	return (1);
}
