CC=cc
NAME=libft.a
SRC_DIR=./src
SRC=$(wildcard $(SRC_DIR)/*.c)
OBJ=$(SRC:.c=.o)

CFLAGS=-Wall -Wextra -Werror

all:$(NAME)

$(OBJ):$(SRC)
	@echo "creating objects ..."
	@$(CC) -c $(CFLAGS) $^
	@echo "done"

$(NAME): $(OBJ)
	@echo "creating library ..."
	@ar rc $(NAME) $^
	@echo "done"

clean:
	@rm -f *.o

fclean: clean
	@rm $(NAME)

re: clean all
