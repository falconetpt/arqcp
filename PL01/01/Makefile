exercise: ex01.o print_data.o
		gcc ex01.o print_data.o -o exercise
	
ex01.o:
		gcc -c ex01.c -o ex01.o

print_data.o:
		gcc -c print_data.c -o print_data.o

run: exercise
		./exercise

clear:
		rm -f ex01.o print_data.o
