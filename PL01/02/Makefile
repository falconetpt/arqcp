exercise: ex02.o vector_fill.o print_array.o
		gcc ex02.o vector_fill.o print_array.o -o exercise

ex02.o:
		gcc -c ex02.c -o ex02.o 
		
vector_fill.o:
		gcc -c vector_fill.c -o vector_fill.o
	
print_array.o:
		gcc -c print_array.c -o print_array.o

run: exercise
		./exercise

clear:
	rm -f ex02.o vector_fill.o
