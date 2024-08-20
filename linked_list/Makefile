CC = gcc

EXEC= test_linked_list 

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

linked_list.c : linked_list.h
main : linked_list.h

clean:
	-rm -f $(OBJ) $(EXEC)