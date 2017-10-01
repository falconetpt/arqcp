exercise: ex15.o random.o print_array.o set_of_three_verification.o
	gcc ex15.o random.o print_array.o set_of_three_verification.o -o exercise

ex15.o:
	gcc -c ex15.c -o ex15.o

random.o:
	gcc -c random.c -o random.o

print_array.o:
	gcc -c print_array.c -o print_array.o
	
set_of_three_verification.o:
	gcc -c set_of_three_verification.c -o set_of_three_verification.o

run: exercise
	./exercise

clear:
	rm -f : ex15.o random.o print_array.o set_of_three_verification.o
