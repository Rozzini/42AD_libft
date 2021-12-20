# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mraspors <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 20:44:04 by mraspors          #+#    #+#              #
#    Updated: 2021/07/09 20:44:07 by mraspors         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs
INCLUDE = includes
CC = gcc
CFLAGS = -Wall -Wextra -Werror
FILES_C = ${SRCS}/ft_putchar.c ${SRCS}/ft_swap.c ${SRCS}/ft_putstr.c ${SRCS}/ft_strcmp.c ${SRCS}/ft_strlen.c
FILES_O = ${SRCS}/ft_putchar.o ${SRCS}/ft_swap.o ${SRCS}/ft_putstr.o ${SRCS}/ft_strcmp.o ${SRCS}/ft_strlen.o
HEADERS = ${INCLUDE}/ft.h
TARGET = libft.a

${TARGET} : ${FILES_O}
	ar -c -r -s $@ $^
%.o : %.c
	${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $@
clean:
	rm -f ${FILES_O}
fclean: clean
	rm -f ${TARGET}
all: ${TARGET}
re: fclean all
