# Macros
CC = gcc
CFLAGS = -Wall -g


  %.o: %.c
	$(CC) $(CFLAGS) -c $<

parse:main.o parse.o 
	$(CC) $(CFLAGS)  $< parse.o -o $@

main.o:  parse.h

parse.o:  parse.h

all: tokenize

clean:
	rm -f parse *.o
