exercise: ex13.o count_char.o
	gcc ex13.o count_char.o -o exercise

ex13.o:
	gcc -c ex13.c -o ex13.o

count_char.o:
	gcc -c count_char.c -o count_char.o

run: exercise
	./exercise

clear:
	rm -f ex13.o count_char.o
