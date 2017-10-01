
exercise: ex16.o where_exists.o
	gcc ex16.o where_exists.o -o exercise

ex16.o:
	gcc -c ex16.c -o ex16.o

where_exists.o:
	gcc -c where_exists.c -o where_exists.o

run: exercise
	./exercise

clear:
	rm -f ex16.o where_exists.o
