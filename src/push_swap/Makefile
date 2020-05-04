# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/09 16:10:21 by rdomingo          #+#    #+#              #
#    Updated: 2019/11/09 16:10:24 by rdomingo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED = \033[0;31m

WHITE = \033[0;37m

NAME = push_swap

FLAGS = -Wall -Wextra -Werror

FILES = ft_atol\
		ft_build_stacks\
		ft_check_arg\
		ft_check_min_max\
		ft_check_spaces\
		ft_count_nums\
		ft_join_args\
		ft_nxt_num_adrs\
		ft_push\
		ft_r_rotate\
		ft_rotate\
		ft_sort_stack\
		ft_sort_stack_rem_val\
		ft_swap\
		ft_validate_stack\
		main\

CFILES = $(FILES:%=./%.c)

OFILES = $(FILES:%=./%.o)

all: $(NAME)

$(NAME): $(OFILES)
	@$(MAKE) -C ../../libft/
	@gcc -o ../../$(NAME) $(OFILES) ../../libft/libft.a

$(OFILES): $(CFILES)
	@gcc -c $(FLAGS) $(CFILES) -I ../../inc/push_swap/

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f ../../$(NAME)

re: fclean all

.PHONY: all clean fclean re
