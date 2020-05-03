/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_spaces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:10:41 by rdomingo          #+#    #+#             */
/*   Updated: 2019/11/09 16:10:44 by rdomingo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap/push_swap.h"

int				ft_check_spaces(const char *str)
{
	int		cntr;

	cntr = 0;
	while (str[cntr])
	{
		if (cntr == 0 && (str[cntr] == '+' || str[cntr] == '-'))
			++cntr;
		if (str[cntr] == '+' || str[cntr] == '-')
			if (!(str[cntr - 1] >= 9 && str[cntr - 1] <= 13) &&
				!(str[cntr - 1] == 32))
				return (-1);
		++cntr;
	}
	return (0);
}
