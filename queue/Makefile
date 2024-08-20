CC = gcc

EXEC= test_queue

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

queue.c : queue.h
main : queue.h

clean:
	-rm -f $(OBJ) $(EXEC)