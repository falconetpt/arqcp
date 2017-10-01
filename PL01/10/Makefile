exercise: ex10.o sum_even_elements_array.o
	gcc ex10.o sum_even_elements_array.o -o exercise

ex10.o:
	gcc -c ex10.c -o ex10.o

sum_even_elements_array.o:
	gcc -c sum_even_elements_array.c -o sum_even_elements_array.o

run: exercise
	./exercise
	
clear:
	rm -f ex10.o sum_even_elements_array.o
