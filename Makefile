#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gvilmont <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/30 17:37:31 by gvilmont          #+#    #+#              #
#    Updated: 2015/12/20 18:56:46 by gvilmont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fillit

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_strrchr.c \
	  ft_itoa.c ft_memccpy.c ft_memcpy.c ft_memset.c \
	  ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c \
	  ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
	  ft_strcat.c ft_strchr.c ft_strcmp.c ft_strcpy.c \
	  ft_strequ.c ft_strjoin.c ft_strlen.c ft_strncat.c \
	  ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnstr.c \
	  ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c \
	  ft_toupper.c ft_memmove.c ft_memdel.c ft_memalloc \
	  ft_memchr.c ft_memcmp.c ft_strclr.c ft_strdel.c \
	  ft_striter.c ft_striteri.c ft_strnew.c ft_strmap.c \
	  ft_strmapi.c ft_strdup.c ft_strlcat.c ft_lstnew.c \
	  ft_lstadd.c ft_lstiter.c ft_lstdelone.c ft_lstdel.c \
	  ft_lstmap.c ft_strsplit.c ft_intcount.c ft_swap.c \
	  ft_isupper.c ft_islower.c ft_normalizer.c \
	  read_text.c ft_emptylinecolumn.c ft_cisvalid.c \
	  ft_intab.c 


OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o \
	  ft_isascii.o ft_isdigit.o ft_isprint.o ft_strrchr.o \
	  ft_itoa.o ft_memccpy.o ft_memcpy.o ft_memset.o \
	  ft_putchar.o ft_putchar_fd.o ft_putendl.o ft_putendl_fd.o \
	  ft_putnbr.o ft_putnbr_fd.o ft_putstr.o ft_putstr_fd.o \
	  ft_strcat.o ft_strchr.o ft_strcmp.o ft_strcpy.o \
	  ft_strequ.o ft_strjoin.o ft_strlen.o ft_strncat.o \
	  ft_strncmp.o ft_strncpy.o ft_strnequ.o ft_strnstr.o \
	  ft_strstr.o ft_strsub.o ft_strtrim.o ft_tolower.o \
	  ft_toupper.o ft_memmove.o ft_memdel.o ft_memalloc.o \
	  ft_memchr.o ft_memcmp.o ft_strclr.o ft_strdel.o \
	  ft_striter.o ft_striteri.o ft_strnew.o ft_strmap.o \
	  ft_strmapi.o ft_strdup.o ft_strlcat.o ft_lstnew.o \
	  ft_lstadd.o ft_lstiter.o ft_lstdelone.o ft_lstdel.o \
	  ft_lstmap.o ft_strsplit.o ft_intcount.o ft_swap.o \
	  ft_isupper.o ft_islower.o ft_normalizer.o \
	  read_text.o ft_emptylinecolumn.o ft_cisvalid.o \
	  ft_intab.o

FLAG = -Wall -Wextra -Werror

HEADER = libft.h

all: $(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c $(HEADER)
		gcc $(FLAG) -c -o $@ $<

clean :
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
