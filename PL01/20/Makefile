exercise: ex20.o find_all.o find_word.o
	gcc ex20.o find_all.o find_word.o -o exercise

ex20.o:
	gcc -c ex20.c -o ex20.o

find_all.o:
	gcc -c find_all.c -o find_all.o

find_word.o:
	gcc -c find_word.c -c find_word.o

run: exercise
	./exercise	

clear:
	ex20.o find_all.o find_word.o
