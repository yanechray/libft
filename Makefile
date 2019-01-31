# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: recharif <recharif@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 11:25:08 by recharif          #+#    #+#              #
#    Updated: 2017/11/27 17:18:58 by recharif         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

C_INCLUDE_PATH += include/

CFLAGS += -Wall -Wextra -Werror

CFLAGS += $(foreach d, $(C_INCLUDE_PATH), -I$d)

SRCS = src/ft_printf.c \
	    src/parse_handlers.c \
	    src/utils/get_unsigned_from_length.c \
	    src/utils/width_pad.c \
	    src/utils/nbrlen.c \
	    src/utils/calc_nbrstrlen.c \
	    src/utils/nbrforceprefix.c \
	    src/handlers/get_handler_arr.c \
	    src/handlers/generic_handle_unsigned.c \
	    src/handlers/handle_null.c \
	    src/handlers/handle_char.c \
	    src/handlers/handle_escape.c \
	    src/handlers/handle_hex.c \
	    src/handlers/handle_int.c \
	    src/handlers/handle_long.c \
	    src/handlers/handle_octal.c \
	    src/handlers/handle_ptr.c \
	    src/handlers/handle_str.c \
	    src/handlers/handle_unsigned.c \
	    src/handlers/handle_wchar.c \
	    src/handlers/handle_binary.c \
	    src/handlers/handle_charswritten.c \
	    src/handlers/handle_float.c \
	    src/handlers/handle_wstr.c \
			libft/get_next_line.c

LIBFT_FUNS =	atoi \
	   bzero \
	   isalnum \
	   isalpha \
	   isascii \
	   isdigit \
	   isprint \
	   itoa \
	   memalloc \
	   memccpy \
	   memchr \
	   memcmp \
	   memcpy \
	   memdel \
	   memmove \
	   memset \
	   putchar \
	   putchar_fd \
	   putendl \
	   putendl_fd \
	   putnbr \
	   putnbr_fd \
	   putstr \
	   putstr_fd \
	   strcat \
	   strchr \
	   strclr \
	   strcmp \
	   strcpy \
	   strdel \
	   strdup \
	   strequ \
	   striter \
	   striteri \
	   strjoin \
	   strlcat \
	   strlen \
	   strmap \
	   strmapi \
	   strncat \
	   strncmp \
	   strncpy \
	   strnequ \
	   strnew \
	   strnstr \
	   strrchr \
	   strrev \
	   strsplit \
	   strstr \
	   strsub \
	   strtrim \
	   tolower \
	   toupper \
	   isspace \
	   lstadd \
	   lstdel \
	   lstdelone \
	   lstiter \
	   lstmap \
	   lstnew \
	   max \
	   min \
	   abs \
	   lstat \
	   lstcount \
	   lstrev \
	   realloc \
	   putnbrbase_fd \
	   putnstr_fd \
	   putwchar_fd \
	   putnstr \
	   nstrlen \
	   putwchar \
	   putnwstr \
	   putnbrbase

CFLAGS += $(foreach fun,$(LIBFT_FUNS),-Dft_$(fun)=libft_$(fun))

OBJS = $(patsubst src/%.c,obj/%.o,$(SRCS))
OBJS += $(foreach fun,$(LIBFT_FUNS),obj/libft/ft_$(fun).o)

CP = cp

RM = rm -rf

all: $(NAME)

$(OBJS): | obj

obj:
	@mkdir -p $@
	@mkdir -p $@/handlers
	@mkdir -p $@/utils
	@mkdir -p $@/libft

obj/%.o: src/%.c
	@$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

obj/libft/%.o: libft/%.c
	@$(CC) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(AR) -rcs $(NAME) $^

clean:
	@$(RM) obj

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
