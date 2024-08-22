CC = gcc

EXEC= test_double_linked_list

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

double_linked_list.c : double_linked_list.h
main : double_linked_list.h

clean:
	-rm -f $(OBJ) $(EXEC)