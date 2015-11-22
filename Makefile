##
## Makefile for bistro in /home/bougon_p/rendu/Piscine_C_bistromathique
## 
## Made by Pierre Bougon
## Login   <bougon_p@epitech.net>
## 
## Started on  Thu Oct 29 14:45:48 2015 Pierre Bougon
## Last update Sun Nov 22 07:11:30 2015 marc brout
##

SRC     = pushswap.c \
	papb.c \
	rrrrarrbrrr.c \
	tri.c \
	sasbssrarb.c


OBJS    = $(SRC:.c=.o)

LIBPATH = ./lib/

NAME    = push_swap

CC      = gcc

CFLAGS  =

LDFLAGS = -lmy -L$(LIBPATH)

RM      = rm -f

$(NAME): $(OBJS)
	@$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)

all: $(NAME)

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
