exercise: ex19.o find_word.o
	gcc ex19.o find_word.o -o exercise

ex19.o:
	gcc -c ex19.c -o ex19.o
	
find_word.o:
	gcc -c find_word.c -o find_word.o

run: exercise
	./exercise

clear:
	rm -f ex19.o find_word.o where_exists.o
