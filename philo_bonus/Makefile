# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nammari <nammari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 21:34:46 by sdummett          #+#    #+#              #
#    Updated: 2022/01/08 15:56:57 by nammari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ************************************ #
#              VARIABLES               #
# ************************************ #

MAG			= \033[0;35m
WHT			= \033[0;37m
BLK			= \033[0;30m
RED			= \033[0;31m
YEL			= \033[0;33m
GRN			= \033[0;32m
RM			= rm -rf
CC			= clang
CFLAGS		= -Wall -Werror -Wextra -pthread
NAME		= philo_bonus
SRCS_DIR	= srcs/


ERROR_FILES = $(addprefix prog_exit/, error_management.c)
PARSE_FILES = $(addprefix parsing/, parse_input.c parse_input_helpers.c)
SIMULATION_FILES = $(addprefix simulation/, launch_simulation.c \
					get_update_time.c philo_routine.c print_state.c)

SRCS_FILES	=  philosophers.c $(ERROR_FILES) $(PARSE_FILES) $(SIMULATION_FILES)

SRCS 		= $(addprefix ${SRCS_DIR}, ${SRC_FILES})
OBJS_DIR	= objs/
OBJS_FILES	= $(SRCS_FILES:.c=.o)
OBJ			= $(addprefix ${OBJS_DIR}, ${OBJS_FILES})
INC			= -Iinclude
includes	= $(wildcard include/*.h)
LIBRARY		= custom_library

OBJS_SUB_DIRS = $(addprefix objs/, prog_exit parsing simulation)


# ************************************ #
#                RULES                 #
# ************************************ #


all debug: $(NAME)

debug: CFLAGS += -g

$(OBJS_DIR):
	mkdir $(OBJS_DIR)
	mkdir $(OBJS_SUB_DIRS)

$(NAME): $(OBJS_DIR) $(OBJ)
	make -C $(LIBRARY)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) custom_library/my_library.a
	@printf "$(WHT)[$(GRN)$(NAME) COMPILED$(WHT)]\n"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c $(include)
	$(CC) $(INC) -c $(CFLAGS) -o $@ $<

clean:
	make clean -sC $(LIBRARY)
	$(RM) $(OBJ)
	@printf "$(WHT)[$(YEL)$(NAME) OBJS REMOVED$(WHT)]\n"

fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS_DIR)
	@printf "$(WHT)[$(YEL)$(NAME) BINARIES REMOVED$(WHT)]\n"

re: fclean all

.PHONY: all debug clean fclean re