/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_str_nbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hchartie <hchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:23:55 by hchartie          #+#    #+#             */
/*   Updated: 2026/02/27 19:39:28 by hchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*join_and_free(char *s1, char *s2);
static int	is_double_space(char *str);

char	*ft_get_str_nbr(int ac, char *av[])
{
	char	*res;
	int		i;

	res = ft_strdup("");
	if (!res)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	i = 1;
	while (i < ac)
	{
		res = join_and_free(res, av[i]);
		res = join_and_free(res, " ");
		i++;
	}
	if (is_double_space(res))
	{
		free(res);
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	return (res);
}

static char	*join_and_free(char *s1, char *s2)
{
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	res = ft_strjoin(s1, s2);
	free(s1);
	if (!res)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	return (res);
}

static int	is_double_space(char *str)
{
	size_t	i;
	int		check;

	i = 0;
	check = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] != ' ')
			check = 1;
		i++;
	}
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] == ' ' && str[i + 1] == ' ' && check)
			return (1);
		i++;
	}
	return (0);
}
