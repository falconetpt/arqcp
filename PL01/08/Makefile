exercise: ex07.o sort.o
	gcc ex07.o sort.o -o exercise

ex07.o:
	gcc -c ex07.c -o ex07.o

sort.o:
	gcc -c sort.c -o sort.o
	
run: exercise
	./exercise

clear:
	rm -f ex07.o sort.o
