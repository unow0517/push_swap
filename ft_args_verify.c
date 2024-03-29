/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_verify.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yowoo <yowoo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:45:50 by yowoo             #+#    #+#             */
/*   Updated: 2024/03/06 20:16:50 by yowoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	ft_isrepeating(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

void	ft_args_verify(int argc, char **argv)
{
	char	**args;
	int		i;
	long	temp;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		temp = ft_atoi(args[i]);
		if (temp < -2147483648 || temp > 2147483647)
			ft_error("Error");
		if (!ft_isnum(args[i]))
			ft_error("Error");
		if (ft_isrepeating(temp, args, i) || strncmp(args[i], "", 1) == 0)
			ft_error("Error");
		i++;
	}
	if (argc == 2)
		ft_free(args);
}
