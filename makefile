all: hw6.o
	gcc -o hw6 hw6.o

hw6.o: hw6.c
	gcc -c hw6.c

run:
	./hw6

clean:
	rm *.o
