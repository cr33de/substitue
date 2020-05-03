/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:10:41 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:10:44 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap/push_swap.h"

void			ft_swap(t_stacks *stacks, int mode)
{
	int		tmp;

	if (mode == 0 && (stacks->stk_size - 1) - stacks->stk_a_t >= 1)
	{
		tmp = (stacks->stk_a)[stacks->stk_a_t];
		(stacks->stk_a)[stacks->stk_a_t] = (stacks->stk_a)[stacks->stk_a_t + 1];
		(stacks->stk_a)[stacks->stk_a_t + 1] = tmp;
	}
	if (mode == 1 && (stacks->stk_size - 1) - stacks->stk_b_t >= 1)
	{
		tmp = (stacks->stk_b)[stacks->stk_b_t];
		(stacks->stk_b)[stacks->stk_b_t] = (stacks->stk_b)[stacks->stk_b_t + 1];
		(stacks->stk_b)[stacks->stk_b_t + 1] = tmp;
	}
	if (mode == 2)
		ft_swap(stacks, 0);
	if (mode == 2)
		ft_swap(stacks, 1);
}
