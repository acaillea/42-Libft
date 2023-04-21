# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acaillea <acaillea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 14:27:45 by acaillea          #+#    #+#              #
#    Updated: 2022/07/29 01:34:54 by acaillea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#

SRCS = 	ft_isalpha.c	\
		ft_isdigit.c 	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
	   	ft_strlen.c		\
		ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memmove.c	\
	   	ft_strlcpy.c	\
		ft_strlcat.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_strchr.c		\
	   	ft_strrchr.c	\
		ft_strncmp.c 	\
		ft_memchr.c		\
		ft_memcmp.c 	\
		ft_strnstr.c	\
	   	ft_atoi.c 		\
		ft_calloc.c		\
		ft_strdup.c 	\
		ft_substr.c		\
		ft_strjoin.c	\
	   	ft_strtrim.c	\
		ft_split.c		\
		ft_itoa.c 		\
		ft_strmapi.c 	\
		ft_striteri.c	\
	   	ft_putchar_fd.c \
		ft_putstr_fd.c 	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c
	   
B_SRCS = 	ft_lstnew.c			\
			ft_lstadd_front.c 	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c 	\
			ft_lstdelone.c 		\
			ft_lstclear.c 		\
			ft_lstiter.c 		\
			ft_lstmap.c

SRCS_DIR =	./Sources/

#------------------------------------------------------------------------------#

CFLAGS	= -Wall -Werror -Wextra
CC 		= gcc
RM		= rm -rf
MK		= mkdir -p

NAME 	= libft.a
OBJ_DIR	= ./Objects/
OBJS	= ${addprefix ${OBJ_DIR}, ${SRCS:%.c=%.o}}
INC		= libft.h
B_OBJS	= ${addprefix ${OBJ_DIR}, ${B_SRCS:%.c=%.o}}

#------------------------------------------------------------------------------#

all: ${NAME}

#------------------------------------------------------------------------------#

${OBJ_DIR}:
	${MK} ${OBJ_DIR}

${OBJ_DIR}%.o:${SRCS_DIR}%.c
	${CC} ${CFLAGS} -I ${INC} -c $< -o $@


${NAME}: ${OBJ_DIR} ${OBJS}
		ar rcs ${NAME} ${OBJS}
		ranlib ${NAME}

#------------------------------------------------------------------------------#

bonus: ${OBJS} ${B_OBJS}
	ar rcs ${NAME} ${OBJS} ${B_OBJS}
	ranlib ${NAME}

clean:
	${RM} ${OBJ_DIR}

fclean: clean
	${RM} ${NAME}

re: fclean all

#------------------------------------------------------------------------------#

.PHONY: all clean fclean re bonus
