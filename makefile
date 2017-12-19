CFLAGS = -Wall -g -ansi -O2 -std=c99

ex_ints: ex_ints.o binary_search.o
	$(CC) -o $@ ex_ints.o binary_search.o

c: clean

clean:
	rm -rf ex_ints *.o *~ 