CC = gcc

EXEC= test_binary_tree

DEBUG= -g

CFLAGS= -std=c17 -Wall -Wextra -Werror -pedantic-errors $(DEBUG)
LDFLAGS=

SRC= $(wildcard *.c)
OBJ= $(SRC:%.c=%.o)

all : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o : %.c
	$(CC) -c $< -o $@ $(CFLAGS)

binary_tree.c : binary_tree.h
main : binary_tree.h

clean:
	-rm -f $(OBJ) $(EXEC)