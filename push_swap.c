/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:18:46 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/21 23:57:59 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_prinstack(long *stack, int len);
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
	ft_prinstack(a, nb_nb);
	ft_printf("%s", rotate_stack(a, 'a', nb_nb));
	ft_prinstack(a, nb_nb);
	ft_printf("%s", rrotate_stack(a, 'a', nb_nb));
	ft_prinstack(a, nb_nb);
	free(a);
	free(b);
	free(str);
	return (0);
}

static void	ft_prinstack(long *stack, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (stack[i] < __INT_MAX__)
			ft_printf("%l\n", stack[i]);
		else
			ft_printf("(nill)\n");
		i++;
	}
	ft_printf("\n");
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
		b[i] = LONG_MAX;
		i++;
	}
	return (b);
}
