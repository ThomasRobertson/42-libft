# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: troberts <troberts@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 01:33:16 by troberts          #+#    #+#              #
#    Updated: 2022/11/01 13:29:58 by troberts         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                              VARIABLE REFERENCE                              #
# **************************************************************************** #

NAME= libft.a

CFLAGS= -Wall -Wextra -Werror -I $(INCLUDES)

AR= ar
ARARCH= -cr
ARINDEX= -s

INCLUDES= include
OBJ_DIR= obj
SRC_DIR= src

# **************************************************************************** #
#                                .C & .H FILES                                 #
# **************************************************************************** #

SRC=	$(SRC_DIR)/ft_abs.c	\
		$(SRC_DIR)/ft_atoi_base.c	\
		$(SRC_DIR)/ft_atoi.c	\
		$(SRC_DIR)/ft_atol_base.c	\
		$(SRC_DIR)/ft_atol.c	\
		$(SRC_DIR)/ft_atoll_base.c	\
		$(SRC_DIR)/ft_atoll.c	\
		$(SRC_DIR)/ft_bzero.c	\
		$(SRC_DIR)/ft_calloc.c	\
		$(SRC_DIR)/ft_error_exit.c	\
		$(SRC_DIR)/ft_error_return.c	\
		$(SRC_DIR)/ft_exit_print.c	\
		$(SRC_DIR)/ft_free_double_ptr.c	\
		$(SRC_DIR)/ft_isalnum.c	\
		$(SRC_DIR)/ft_isalpha.c	\
		$(SRC_DIR)/ft_isascii.c	\
		$(SRC_DIR)/ft_isdigit.c	\
		$(SRC_DIR)/ft_isprint.c	\
		$(SRC_DIR)/ft_isspace.c	\
		$(SRC_DIR)/ft_itoa.c	\
		$(SRC_DIR)/ft_lstadd_back.c	\
		$(SRC_DIR)/ft_lstadd_front.c	\
		$(SRC_DIR)/ft_lstclear.c	\
		$(SRC_DIR)/ft_lstdelone.c	\
		$(SRC_DIR)/ft_lstiter.c	\
		$(SRC_DIR)/ft_lstlast.c	\
		$(SRC_DIR)/ft_lstmap.c	\
		$(SRC_DIR)/ft_lstnew.c	\
		$(SRC_DIR)/ft_lstsize.c	\
		$(SRC_DIR)/ft_memalloc.c	\
		$(SRC_DIR)/ft_memccpy.c	\
		$(SRC_DIR)/ft_memchr.c	\
		$(SRC_DIR)/ft_memcmp.c	\
		$(SRC_DIR)/ft_memcpy.c	\
		$(SRC_DIR)/ft_memdel.c	\
		$(SRC_DIR)/ft_memmove.c	\
		$(SRC_DIR)/ft_memrchr.c	\
		$(SRC_DIR)/ft_memset.c	\
		$(SRC_DIR)/ft_printf_itoa_nbrlen.c	\
		$(SRC_DIR)/ft_printf_print_char.c	\
		$(SRC_DIR)/ft_printf_print_int.c	\
		$(SRC_DIR)/ft_printf_print_lower_hex.c	\
		$(SRC_DIR)/ft_printf_print_ptr.c	\
		$(SRC_DIR)/ft_printf_print_str.c	\
		$(SRC_DIR)/ft_printf_print_unsigned.c	\
		$(SRC_DIR)/ft_printf_print_upper_hex.c	\
		$(SRC_DIR)/ft_printf.c	\
		$(SRC_DIR)/ft_putchar.c	\
		$(SRC_DIR)/ft_putchar_fd.c	\
		$(SRC_DIR)/ft_putendl.c	\
		$(SRC_DIR)/ft_putendl_fd.c	\
		$(SRC_DIR)/ft_putnbr.c	\
		$(SRC_DIR)/ft_putnbr_fd.c	\
		$(SRC_DIR)/ft_putstr.c	\
		$(SRC_DIR)/ft_putstr_fd.c	\
		$(SRC_DIR)/ft_split.c	\
		$(SRC_DIR)/ft_strcat.c	\
		$(SRC_DIR)/ft_strchr.c	\
		$(SRC_DIR)/ft_strclr.c	\
		$(SRC_DIR)/ft_strcmp.c	\
		$(SRC_DIR)/ft_strcpy.c	\
		$(SRC_DIR)/ft_strdel.c	\
		$(SRC_DIR)/ft_strdup.c	\
		$(SRC_DIR)/ft_strequ.c	\
		$(SRC_DIR)/ft_striter.c	\
		$(SRC_DIR)/ft_striteri.c	\
		$(SRC_DIR)/ft_strjoin_free.c \
		$(SRC_DIR)/ft_strjoin.c	\
		$(SRC_DIR)/ft_strlcat.c	\
		$(SRC_DIR)/ft_strlcpy.c	\
		$(SRC_DIR)/ft_strlen.c	\
		$(SRC_DIR)/ft_strmap.c	\
		$(SRC_DIR)/ft_strmapi.c	\
		$(SRC_DIR)/ft_strncat.c	\
		$(SRC_DIR)/ft_strncmp.c	\
		$(SRC_DIR)/ft_strncpy.c	\
		$(SRC_DIR)/ft_strnequ.c	\
		$(SRC_DIR)/ft_strnew.c	\
		$(SRC_DIR)/ft_strnstr.c	\
		$(SRC_DIR)/ft_strrchr.c	\
		$(SRC_DIR)/ft_strstr.c	\
		$(SRC_DIR)/ft_strtrim.c	\
		$(SRC_DIR)/ft_substr.c	\
		$(SRC_DIR)/ft_tolower.c	\
		$(SRC_DIR)/ft_toupper.c	\
		$(SRC_DIR)/get_next_line.c


OBJ=	$(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

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

HEADER_NORM =		@echo "${COLOR_PURPLE}\
					\n/* ************************************************************************** */\
					\n/*                            CHECKING THE NORM...                            */\
					\n/* ************************************************************************** */\n\
					${COLOR_END}"

ifndef ECHO
HIT_TOTAL != ${MAKE} ${MAKECMDGOALS} --dry-run ECHO="HIT_MARK" | grep -c "HIT_MARK"
HIT_COUNT = $(eval HIT_N != expr ${HIT_N} + 1)${HIT_N}
ECHO = @printf "[${HIT_COUNT}/${HIT_TOTAL}] Compiling %-40s$(GREEN){done}\n$(RESET)" "$<:"
endif

# **************************************************************************** #
#                                    RULES                                     #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARARCH) $@ $^
	@$(AR) $(ARINDEX) $@
	@$(ECHO) Compiling $@

$(OBJ): | $(OBJ_DIR)

$(OBJ_DIR):
	@mkdir -p $@

$(OBJ): $(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(ECHO) Compiling $@
	@$(CC) $(CFLAGS) -c $< -o $@

cleanobj:
	${HEADER_CLEAN}
	@rm -f $(OBJ)

cleanobjdir: cleanobj
	@rm -rf $(OBJ_DIR)

clean: cleanobjdir
	
fclean: clean
	${HEADER_FCLEAN}
	@rm -f $(NAME)

norm:
	${HEADER_NORM}
	@echo "$(COLOR_CYAN)"
	norminette $(SRC_DIR) | awk "!/: OK!/"
	@echo "$(COLOR_PURPLE)"
	norminette $(INCLUDES) | awk "!/: OK!/"
	@echo "$(COLOR_END)"

re: fclean all

.PHONY: all clean fclean re norm cleanobj cleanobjdir
