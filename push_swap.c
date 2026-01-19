/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 14:18:46 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/19 13:09:25 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	char	*str;
	int		nb_nb;
	int		i;
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
	i = 0;
	while (i < ft_count_nb(str))
	{
		ft_printf("%l\n", a[i]);
		i++;
	}
	ft_printf("%s\n", swap_stack('a', a));
	i = 0;
	while (i < nb_nb)
	{
		ft_printf("%l\n", a[i]);
		i++;
	}
	free(a);
	free(b);
	free(str);
	return (0);
}
