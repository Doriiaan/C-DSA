CC = gcc

EXEC= test_stack 

DEBUG= -g

CFLAGS= -std=c17 -Wall -Wextra -Werror -pedantic-errors $(DEBUG)
LDFLAGS=

SRC= $(wildcard *.c) 
OBJ= $(SRC:%.c=%.o)

project : $(EXEC)

$(EXEC) : $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o : %.c
	$(CC) -c $< -o $@ $(CFLAGS)

stack.c : stack.h
main : stack.h

clean:
	-rm -f $(OBJ) $(EXEC)