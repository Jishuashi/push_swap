/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:18:46 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/21 22:49:24 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_prinstack(long *stack, int len);

int	main(int ac, char *av[])
{
	char	*str;
	int		nb_nb;
	long	*a;
	long	*b;

	str = ft_get_str_nbr(ac, av);
	nb_nb = ft_count_nb(str);
	a = NULL;
	b = (long *)malloc(sizeof(long) * nb_nb);
	(void)b;
	if (!check_args(ac, av))
	{
		write(2, "Error\n", 7);
		return (1);
	}
	a = get_args_array(a, str, nb_nb);
	ft_prinstack(a, nb_nb);
	down_tab(a, nb_nb);
	ft_prinstack(a, nb_nb);
	up_tab(a, nb_nb);
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
			ft_printf("x\n");
		i++;
	}
	ft_printf("\n");
}
