.PHONY: clean
komp:gm.c
	gcc -Wall -o test.o gm.c
	./test.o
clean:
	rm test.o
