# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdomingo <rdomingo@student.wethinkcode.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/18 17:34:59 by rdomingo          #+#    #+#              #
#    Updated: 2019/10/18 17:35:17 by rdomingo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -c -Wall -Wextra -Werror

FILES =	ft_atoi ft_bzero ft_isalnum ft_isalpha ft_isascii\
		ft_isdigit ft_isprint ft_memccpy ft_memchr ft_memcmp\
		ft_memcpy ft_memmove ft_memset ft_putchar ft_strcat\
		ft_strchr ft_strcmp ft_strcpy ft_strdup ft_strlcat\
		ft_strlen ft_strncat ft_strncmp ft_strncpy ft_strrchr\
		ft_strstr ft_strnstr ft_tolower ft_toupper ft_memalloc\
		ft_memdel ft_strnew ft_strdel ft_strclr ft_striter\
		ft_striteri ft_strmap ft_strmapi ft_strequ ft_strnequ\
		ft_strsub ft_strjoin ft_strtrim ft_strclen ft_strsplit\
		ft_itoa ft_putstr ft_putendl ft_putnbr ft_putchar_fd\
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew\
		ft_lstadd ft_lstdelone ft_lstdel ft_lstiter ft_lstmap\
		get_next_line ft_del_matrix ft_count_words ft_alloc_mat_rows\

CFILES = $(FILES:=.c)

OFILES = $(FILES:=.o)

all: $(NAME)
	@:

$(NAME): $(OFILES)
	@ar rcs $(NAME) $(OFILES)

$(OFILES): $(CFILES)
	@gcc $(FLAGS) $(CFILES) -I ./

clean:
	@rm -f $(OFILES)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
