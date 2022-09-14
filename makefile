CC = gcc
CFLAGS = -g -Wall -std=c99
OBJECTS = project2.c
NAME = project2
TODELETE = $(NAME) *.o

mt-collatz : $(OBJECTS)
    $(CC) $(CFLAGS) $(OBJECTS) -o $(NAME) $(LIBS)

.PHONY: clean
clean:
    rm -f $(TODELETE)