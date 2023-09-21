tokenize:main.o parse.o 
	gcc main.o parse.o -o tokenize

main.o: main.c parse.h
		gcc -Wall -c main.c

parse.o: parse.c parse.h
		gcc -Wall -c parse.c

all: tokenize

clean:
	rm -f tokenize *.o
