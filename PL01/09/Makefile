exercise: ex09.o sort_and_remove_reps.o sort.o
	gcc ex09.o sort_and_remove_reps.o sort.o -o exercise

ex09.o:
	gcc -c ex09.c -o ex09.o

sort_and_remove_reps.o:
	gcc -c sort_and_remove_reps.c -o sort_and_remove_reps.o

sort.o:
	gcc -c sort.c -o sort.o

run: exercise
	./exercise

clear:
	rm -f ex09.o sort_and_remove_reps.o sort.o
