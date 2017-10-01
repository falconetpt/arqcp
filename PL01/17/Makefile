exercise: ex17.o print_array.o swap.o
	gcc ex17.o print_array.o swap.o -o exercise

ex17.o:
	gcc -c ex17.c -o ex17.o

print_array.o:
	gcc -c print_array.c -o print_array.o

swap.o:
	gcc -c swap.c -o swap.o

run: exercise
	./exercise

clear:
	rm -f ex17.o print_array.o swap.o
