# **************************************************************************** #
#                                                                              #
#     primeLoad                                                                #
#     v. alpha-1.0                                                             #
#                                                                              #
#     Makefile                                       by Animoke (animoke.dev)  #
#                                                                              #
# **************************************************************************** #

SRC= main.c
SRC:= $(SRC) prime_utils.c
OBJ= $(SRC:.c=.o)
HEAD=prime.h
CC=gcc
CFLAGS= -Wall -Werror -Wextra -Iinclude
NAME=prime.a

all: $(NAME)

$(NAME): $(HEAD) $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean re