# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gychoi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 16:28:01 by gychoi            #+#    #+#              #
#    Updated: 2022/12/10 16:19:55 by gychoi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = crus
RM = rm -f

SRCS = \
ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c get_next_line.c get_next_line_utils.c ft_printf.c print_address.c print_char.c print_number.c print_string.c

BNS_SRCS = \
ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS = $(SRCS:.c=.o)
BNS_OBJS = $(BNS_SRCS:.c=.o)

ifdef WITH_BONUS
	OBJECTS = $(OBJS) $(BNS_OBJS)
else
	OBJECTS = $(OBJS)
endif

$(NAME) : $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

.PHONY: all
all :
	$(MAKE) WITH_BONUS=1

.PHONY: bonus
bonus : all

.PHONY: clean
clean :
	$(RM) $(OBJS) $(BNS_OBJS)

.PHONY: fclean
fclean : clean
	$(RM) $(NAME)

.PHONY: re
re : fclean 
	$(MAKE) all
