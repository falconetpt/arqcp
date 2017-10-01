exercise: ex12.o capitalize_word.o
	gcc ex12.o capitalize_word.o -o exercise
	
ex12.o:
	gcc -c ex12.c -o ex12.o

capitalize_word.o:
	gcc -c capitalize_word.c -o capitalize_word.o

run: exercise
	./exercise

clear:
	rm -f ex12.o capitalize_word.o
	
