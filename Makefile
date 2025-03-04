# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: psoto-go <psoto-go@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/29 13:53:43 by psoto-go          #+#    #+#              #
#    Updated: 2022/02/17 11:56:47 by psoto-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c ft_strdup.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_strchr.c  ft_strlcpy.c ft_strnstr.c \
					ft_tolower.c ft_bzero.c   ft_isascii.c ft_memcpy.c \
					ft_memmove.c ft_strlen.c  ft_strrchr.c ft_calloc.c \
					ft_toupper.c ft_isdigit.c ft_memchr.c  ft_memset.c \
					ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
					ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
					ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_atol.c ./gnl/get_next_line.c \
					./gnl/get_next_line.c ./gnl/get_next_line_utils.c ft_strjoinlks.c

OBJS			= $(SRCS:.c=.o)

FT_PRINTF_OBJS	= ./ft_printf/*.o
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror
NAME			= libft.a
FT_PRINTF		= ft_printf

all:			$(NAME)

$(NAME):		$(OBJS)
				$(MAKE) all -C $(FT_PRINTF)
				ar rcs $(NAME) $(OBJS) $(FT_PRINTF_OBJS)
				
clean:
				$(RM) $(OBJS)
				$(MAKE) clean -C ./ft_printf/


fclean:			clean
				$(MAKE) fclean -C ./ft_printf/
				$(RM) $(NAME)

re:				fclean $(NAME)


.PHONY:			all clean fclean re