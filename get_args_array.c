/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_args_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:50:12 by hchartie          #+#    #+#             */
/*   Updated: 2026/01/13 14:34:09 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int			count_nb(int ac, char *av[]);
static long long	*put_in_tab(long long *tab, int ac, char *av[]);

int	*get_args_array(long long *tab, int ac, char *av[])
{
	size_t	len;
	int		nb_nb;

	nb_nb = count_nb(ac, av);
	tab = (long long *)malloc(sizeof(long long) * nb_nb);
	if (!tab)
		return (NULL);
	tab = put_in_tab(tab, ac, av);
	return (tab);
}

static	int	count_nb(int ac, char *av[])
{
	size_t	i;
	size_t	j;
	size_t	len;
	int		res;

	i = 1;
	while (i < (size_t)ac)
	{
		j = 0;
		len = ft_strlen(av[i]);
		while (j < len)
		{
			if (av[i][j] == ' ' && j != len - 1 && j != 0)
				res++;
			j++;
		}
		res++;
		i++;
	}
	return (res);
}

static long long	*put_in_tab(long long *tab, int ac, char *av[])
{
	size_t	j;
	size_t	i;
	size_t	e;
	int		nb_nb;

	nb_nb = count_nb(ac, av);
	i = 1;
	e = 0;
	while (i < (size_t)ac)
	{
		j = 0;
		while (j < ft_strlen(av[i]))
		{
			if (e >= nb_nb)
				break ;
			j++;
			e++;
		}
		i++;
	}
}
