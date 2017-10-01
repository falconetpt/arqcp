exercise: ex14.o frequencies.o
	gcc ex14.o frequencies.o -o exercise

ex14.o:
	gcc -c ex14.c -o ex14.o

frequencies.o:
	gcc -c frequencies.c -o frequencies.o

run: exercise
	./exercise

clear:
	rm -f ex14.o frequencies.o
