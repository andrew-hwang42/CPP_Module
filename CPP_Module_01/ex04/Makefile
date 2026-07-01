# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/01 01:04:42 by ahwang            #+#    #+#              #
#    Updated: 2026/07/01 01:09:06 by ahwang           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CPP = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

FILES = ./main

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
	rm -rf *.replace

re: fclean all

.PHONY: all clean fclean re
