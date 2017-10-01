exercise: ex06.o power.o
	gcc ex06.o power.o -o exercise

ex06.o:
	gcc -c ex06.c -o ex06.o

power.o:
	gcc -c power.c -o power.o

run: exercise
	./exercise

clear:
	rm -f ex06.o power.o
