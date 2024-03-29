/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_build_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:11:39 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:11:40 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/checker/checker.h"

static void		ft_one_arg(t_stacks *stacks, char **av)
{
	int			num_count;
	int			cntr;

	num_count = ft_count_nums(av[1]);
	stacks->stk_a = malloc(sizeof(int) * num_count);
	cntr = -1;
	while (++cntr < num_count)
		(stacks->stk_a)[cntr] = ft_atoi(ft_nxt_num_adrs(av[1], 0));
	stacks->stk_b = malloc(sizeof(int) * num_count);
	stacks->stk_a_t = 0;
	stacks->stk_b_t = num_count;
	stacks->stk_size = num_count;
}

static void		ft_multi_arg(t_stacks *stacks, char **av)
{
	char		*str;
	int			num_count;
	int			cntr;

	str = ft_join_args(av);
	num_count = ft_count_nums(str);
	stacks->stk_a = malloc(sizeof(int) * num_count);
	cntr = -1;
	while (++cntr < num_count)
		(stacks->stk_a)[cntr] = ft_atoi(ft_nxt_num_adrs(str, 0));
	stacks->stk_b = malloc(sizeof(int) * num_count);
	stacks->stk_a_t = 0;
	stacks->stk_b_t = num_count;
	stacks->stk_size = num_count;
	ft_memdel((void **)(&str));
}

t_stacks		*ft_build_stacks(int ac, char **av)
{
	t_stacks	*stacks;

	stacks = malloc(sizeof(t_stacks));
	ft_nxt_num_adrs(av[1], 1);
	if (ac == 2)
		ft_one_arg(stacks, av);
	else if (ac > 2)
		ft_multi_arg(stacks, av);
	return (stacks);
}
