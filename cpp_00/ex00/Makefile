# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msloot <msloot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/14 19:19:04 by msloot            #+#    #+#              #
#    Updated: 2025/06/07 21:07:40 by adelille         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	megaphone
CC = 	c++
RM = 	rm -rf

CFLAGS =	-Wall -Werror -Wextra
CFLAGS =	-std=c++98
# CFLAGS +=	-g
# CFLAGS +=	-fsanitize=address
# CFLAGS +=	-O2

# **************************************************************************** #
#	MAKEFILE	#

MAKEFLAGS += --silent

SHELL := bash

B =		$(shell tput bold)
I =		$(shell tput sitm)

BLA =	$(shell tput setaf 0)
RED =	$(shell tput setaf 1)
GRE =	$(shell tput setaf 2)
YEL =	$(shell tput setaf 3)
BLU =	$(shell tput setaf 4)
MAG =	$(shell tput setaf 5)
CYA =	$(shell tput setaf 6)
WHI =	$(shell tput setaf 7)

D =		$(shell tput sgr0)
CLR =	$(shell tput el 1)

PRIMARY =	$(shell tput setaf 13)
SECONDARY =	$(GRE)

PROGRESS_START =	$(PRIMARY)▐
PROGRESS_END =		$(PRIMARY)▌
# PROGRESS_EMPTY =	-
PROGRESS_FILL =		$(SECONDARY)█

# **************************************************************************** #
#	SOURCE	#

SRC_PATH =	./
OBJ_PATH =	./obj/

SRC_NAME =	megaphone.cpp \

SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ_NAME = $(SRC_NAME:.cpp=.o)
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# *************************************************************************** #

define	progress_bar
	@printf "$(PROGRESS_START)$(D)"
	@i=0
	@while [[ $$i -lt $(words $(SRC)) ]] ; do \
		printf " " ; \
		((i = i + 1)) ; \
	done
	@printf "$(D)$(PROGRESS_END)$(D)\r$(PROGRESS_START)$(D)"
endef

name = 0

# *************************************************************************** #
#	RULES	#

all:	$(LOCAL_LIB) launch $(NAME)
	@if [ $(name) -ne 0 ]; then \
		printf "\n$(B)$(PRIMARY)─╴$(NAME) compiled$(D)\n"; \
	else \
		printf "\n$(B)$(PRIMARY)─╴$(D)$(B)$(I)nothing to do$(D)\n"; \
	fi

launch:
	$(call progress_bar)

$(NAME):	$(LOCAL_LIB) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LOCAL_LIB) -o $(NAME)
	@$(eval name=1)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@
	@printf "$(D)$(PROGRESS_FILL)$(D)"

$(LOCAL_LIB):
	@$(MAKE) -C $(dir $@)

clean:	$(addsuffix .clean, $(LOCAL_LIB_PATH))
	@$(RM) $(OBJ_PATH) $(TEST_OBJ_PATH)
	@echo "$(B)cleared$(D)"

%.clean:
	@$(MAKE) clean -C $*

fclean:		clean $(addsuffix .fclean, $(LOCAL_LIB_PATH))
	@$(RM) $(NAME) $(TEST_NAME)

%.fclean:
	@$(MAKE) fclean -CPP $*

re:			fclean all

-include $(OBJ:.o=.d)

.PHONY: all clean fclean re launch

# **************************************************************************** #
