/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:18:46 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/20 05:13:50 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	*init_b(long *b, int nb_nb);
static void	check_stack(char *str, long *a, long *b);

int	main(int ac, char *av[])
{
	char	*str;
	int		nb_nb;
	long	*a;
	long	*b;

	a = NULL;
	b = NULL;
	if (!check_args(ac, av))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	str = ft_get_str_nbr(ac, av);
	nb_nb = ft_count_nb(str);
	a = get_args_array(a, str, nb_nb);
	b = init_b(b, nb_nb);
	check_stack(str, a, b);
	if (nb_nb == 5 || nb_nb <= 3)
		a = little_nb_sort(a, b, str, nb_nb);
	else
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
		ft_putstr_fd("Error\n", 2);
		exit (1);
	}
	i = 0;
	while (i < nb_nb)
	{
		b[i] = NULL_INT;
		i++;
	}
	return (b);
}

static	void	check_stack(char *str, long *a, long *b)
{
	if (!a || !b || !str)
	{
		free(a);
		free(b);
		free(str);
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}
