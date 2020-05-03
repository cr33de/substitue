/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vaildate_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:10:41 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:10:44 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap/push_swap.h"

int			ft_validate_stack(t_stacks *stacks)
{
	int		cntr;

	if (stacks->stk_size == 1 && stacks->stk_b_t == stacks->stk_size)
		return (1);
	if (stacks->stk_b_t == stacks->stk_size)
	{
		cntr = -1;
		while (++cntr + 1 < stacks->stk_size)
			if ((stacks->stk_a)[cntr] > (stacks->stk_a)[cntr + 1])
				return (0);
	}
	else
		return (0);
	return (1);
}
