# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/01 03:10:24 by ahwang            #+#    #+#              #
#    Updated: 2026/07/01 03:10:49 by ahwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

FILES = ./srcs/main \
		./srcs/Fixed

SRCS = $(addsuffix .cpp, $(FILES))
OBJS = $(addsuffix .o, $(FILES))

INCS_DIR = ./incs/

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@ -I$(INCS_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $^ -o $@ -I$(INCS_DIR)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
