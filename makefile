# Macros
CC = gcc
CFLAGS = -Wall
# CFLAGS = -g
# CFLAGS = -D NDEBUG
# CFLAGS = -D NDEBUG -O
# CFLAGS = -std=c90 -Wall -Wextra



tokenize:main.o parse.o 
	$(CC) $(CFLAGS)  main.o parse.o -o tokenize

main.o: main.c parse.h
	$(CC) $(CFLAGS)  -c main.c

parse.o: parse.c parse.h
	$(CC) $(CFLAGS)  -c parse.c

all: tokenize

clean:
	rm -f tokenize *.o
