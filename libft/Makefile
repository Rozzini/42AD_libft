# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mraspors <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/13 22:56:17 by mraspors          #+#    #+#              #
#    Updated: 2022/01/13 22:56:17 by mraspors         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		=	libft.a
SRC_DIR 	=	src/
INCLUDE		=	include
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I


IS_DIR	=	is/
IS		=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c

MEM_DIR	=	mem/
MEM		=	ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c ft_memmove.c \
				ft_memset.c

PUT_DIR	=	put/
PUT		=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

TO_DIR	=	to/
TO		=	ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c

STR_DIR	=	str/
STR		=	ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c \
				ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c

LST_DIR	=	lst/
LST		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
				ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

SRC_FILES+=$(addprefix $(IS_DIR),$(IS))
SRC_FILES+=$(addprefix $(MEM_DIR),$(MEM))
SRC_FILES+=$(addprefix $(PUT_DIR),$(PUT))
SRC_FILES+=$(addprefix $(TO_DIR),$(TO))
SRC_FILES+=$(addprefix $(STR_DIR),$(STR))
SRC_FILES+=$(addprefix $(LST_DIR),$(LST))

SRC =  $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJECTS = $(addsuffix .o, $(SRC_FILES))

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(INCLUDE) -c $(SRC)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all