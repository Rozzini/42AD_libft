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
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rcs


IS_DIR	=	ft_is/
IS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

MEM_DIR	=	ft_mem/
MEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memmove ft_memset

PUT_DIR	=	ft_put/
PUT		=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

TO_DIR	=	ft_to/
TO		=	ft_atoi ft_itoa ft_tolower ft_toupper

STR_DIR	=	ft_str/
STR		=	ft_split ft_strchr ft_strdup ft_striteri ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr

LST_DIR	=	ft_lst/
LST		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

SRC_FILES+=$(addprefix $(IS_DIR),$(IS))
SRC_FILES+=$(addprefix $(MEM_DIR),$(MEM))
SRC_FILES+=$(addprefix $(PUT_DIR),$(PUT))
SRC_FILES+=$(addprefix $(TO_DIR),$(TO))
SRC_FILES+=$(addprefix $(STR_DIR),$(STR))
SRC_FILES+=$(addprefix $(LST_DIR),$(LST))

OBJECTS= $(addsuffix .o, $(SRC_FILES))

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRCS)
	ar -rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all