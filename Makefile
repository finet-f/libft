##
## Makefile for bsq in /home/finet_f/rendu/Prog_elem/BSQ/CPE_2015_BSQ
##
## Made by Florian Finet
## Login   <finet_f@epitech.net>
##
## Started on  Wed Dec 16 17:51:58 2015 Florian Finet
## Last update Sat Dec 19 20:45:20 2015 Florian Finet
##

RM	= rm -f

NAME	= libft.a

SRC	= *.c

CFLAGS	= -I./include -W -Werror -Wall -Wextra -g

OBJ	= $(SRC:.c=.o)

all	: $(NAME)

$(NAME)	:$(OBJ)
	ar rc libft.a *.c

clean: 
	$(RM) $(OBJ)

fclean 	: clean
	$(RM) $(NAME)

re 	: fclean all

.PHONY	: all clean fclean re
