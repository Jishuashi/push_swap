/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:18:46 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/26 16:45:00 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	*init_b(long *b, int nb_nb);

int	main(int ac, char *av[])
{
	char	*str;
	int		nb_nb;
	long	*a;
	long	*b;

	a = NULL;
	b = NULL;
	str = ft_get_str_nbr(ac, av);
	nb_nb = ft_count_nb(str);
	b = init_b(b, nb_nb);
	if (!check_args(ac, av))
	{
		write(2, "Error\n", 7);
		return (1);
	}
	a = get_args_array(a, str, nb_nb);
	a = radix_sort(a, b, nb_nb);
	free(a);
	free(b);
	free(str);
	return (0);
}

static long	*init_b(long *b, int nb_nb)
{
	int	i;

	b = (long *)malloc(sizeof(long) * nb_nb);
	if (!b)
	{
		write(2, "Error\n", 7);
		exit (1);
	}
	i = 0;
	while (i < nb_nb)
	{
		b[i] = 2147483648;
		i++;
	}
	return (b);
}
