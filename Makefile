# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: troberts <troberts@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 01:33:16 by troberts          #+#    #+#              #
#    Updated: 2022/04/21 00:23:35 by troberts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                              VARIABLE REFERENCE                              #
# **************************************************************************** #

CC= gcc
CFLAGS= -Wall -Wextra -Werror
NAME= libft.a

AR= ar
ARARCH= -cr
ARINDEX= -s

# **************************************************************************** #
#                                .C & .H FILES                                 #
# **************************************************************************** #

SRC=	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c  \
		ft_isalnum.c  \
		ft_isalpha.c  \
		ft_isascii.c  \
		ft_isdigit.c  \
		ft_isprint.c  \
		ft_itoa.c  \
		ft_memccpy.c  \
		ft_memchr.c  \
		ft_memcmp.c  \
		ft_memcpy.c  \
		ft_memmove.c  \
		ft_memset.c  \
		ft_putchar_fd.c  \
		ft_putendl_fd.c  \
		ft_putendl.c  \
		ft_putnbr_fd.c  \
		ft_putstr_fd.c  \
		ft_split.c  \
		ft_strchr.c  \
		ft_strdup.c  \
		ft_strjoin.c  \
		ft_strlcat.c  \
		ft_strlcpy.c  \
		ft_strlen.c  \
		ft_strmapi.c  \
		ft_strncmp.c  \
		ft_strnstr.c  \
		ft_strrchr.c  \
		ft_striteri.c  \
		ft_strtrim.c  \
		ft_substr.c  \
		ft_tolower.c  \
		ft_toupper.c

SRCBONUS=	ft_atol_bonus.c \
			ft_atoll_bonus.c  \
			ft_charinset_bonus.c  \
			ft_isspace_bonus.c  \
			ft_lstadd_back_bonus.c  \
			ft_lstadd_front_bonus.c  \
			ft_lstclear_bonus.c  \
			ft_lstdelone_bonus.c  \
			ft_lstiter_bonus.c  \
			ft_lstlast_bonus.c  \
			ft_lstmap_bonus.c  \
			ft_lstnew_bonus.c  \
			ft_lstsize_bonus.c  \
			ft_memalloc_bonus.c  \
			ft_memchr_bonus.c  \
			ft_memdel_bonus.c  \
			ft_putchar_bonus.c  \
			ft_putnbr_bonus.c  \
			ft_putstr_bonus.c  \
			ft_strncat_bonus.c  \
			ft_strncpy_bonus.c  \
			ft_strcat_bonus.c  \
			ft_strclr_bonus.c  \
			ft_strcmp_bonus.c  \
			ft_strcpy_bonus.c  \
			ft_strdel_bonus.c  \
			ft_strequ_bonus.c  \
			ft_striter_bonus.c  \
			ft_strmap_bonus.c  \
			ft_strnequ_bonus.c  \
			ft_strnew_bonus.c  \
			ft_strstr_bonus.c

# **************************************************************************** #
#                                HEADER CONFIG                                 #
# **************************************************************************** #

#                 # <-- start here          | <-- middle            # <-- stop here
HEADER_NAME 	= +                       Libft                     #

COLOR_RED		= \033[0;31m
COLOR_GREEN		= \033[0;32m
COLOR_YELLOW	= \033[0;33m
COLOR_BLUE		= \033[0;34m
COLOR_PURPLE	= \033[0;35m
COLOR_CYAN		= \033[0;36m
COLOR_WHITE		= \033[0;37m
COLOR_END		= \033[m

HEADER_LIBRARY =	@echo "${COLOR_YELLOW}\
					\n/* ************************************************************************** */\
					\n/*                          CREATING STATIC LIBRARY...                        */\
					\n/* ************************************************************************** */\n\
					${COLOR_END}"

HEADER_BONUS =		@echo "${COLOR_GREEN}\
					\n/* ************************************************************************** */\
					\n/*                         ADDING BONUSES TO LIBRARY...                       */\
					\n/* ************************************************************************** */\n\
					${COLOR_END}"

HEADER_CLEAN =		@echo "${COLOR_RED}\
					\n/* ************************************************************************** */\
					\n/*                                 CLEANING...                                */\
					\n/* ************************************************************************** */\n\
					${COLOR_END}"

HEADER_FCLEAN =		@echo "${COLOR_RED}\
					\n/* ************************************************************************** */\
					\n/*                              FORCE CLEANING...                             */\
					\n/* ************************************************************************** */\n\
					${COLOR_END}"

HEADER_NORM =		@echo "${COLOR_PURPLE}\
					\n/* ************************************************************************** */\
					\n/*                            CHECKING THE NORM...                            */\
					\n/* ************************************************************************** */\n\
					${COLOR_END}"


# **************************************************************************** #
#                                    RULES                                     #
# **************************************************************************** #

all: header $(NAME)

header:
	@echo "${COLOR_CYAN}"
	@echo "/* ************************************************************************** */"
	@echo "/*                                                                            */"
	@echo "/*            :::      ::::::::                                               */"
	@echo "/*          :+:      :+:    :+:                                               */"
	@echo "/*        +:+ +:+         +:${HEADER_NAME}*/"
	@echo "/*      +#+  +:+       +#+                                                    */"
	@echo "/*    +#+#+#+#+#+   +#+                       Thomas Robertson                */"
	@echo "/*         #+#    #+#                     <troberts@student.42.fr>            */"
	@echo "/*        ###   ########.fr                                                   */"
	@echo "/*                                                                            */"
	@echo "/* ************************************************************************** */"
	@echo "${COLOR_END}"

header_assemble:
	@echo "${COLOR_GREEN}"
	@echo "/* ************************************************************************** */"
	@echo "/*                    PREPROCESSING, COMPILING, ASSEMBLY...                   */"
	@echo "/* ************************************************************************** */"
	@echo "${COLOR_END}"

OBJ= $(SRC:.c=.o)

OBJBONUS= $(SRCBONUS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	$(HEADER_LIBRARY)
	$(AR) $(ARARCH) $@ $^
	$(AR) $(ARINDEX) $@

bonus: header $(OBJBONUS)
	$(HEADER_BONUS)
	$(AR) $(ARARCH) $(NAME) $(OBJBONUS)
	$(AR) $(ARINDEX) $(NAME)

complete: all bonus

clean: header
	${HEADER_CLEAN}
	rm -f $(OBJ) $(OBJBONUS)

fclean: header clean
	${HEADER_FCLEAN}
	rm -f $(NAME)

re: header fclean all

norm: header
	${HEADER_NORM}
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h

.PHONY: all clean fclean re norm bonus complete header
