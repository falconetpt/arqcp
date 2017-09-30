exercise: replace_lower_case.o ex04.o
	gcc replace_lower_case.o ex04.o -o exercise
	
replace_lower_case.o:
	gcc -c replace_lower_case.c -o replace_lower_case.o

ex04.o:
	gcc -c ex04.c -o ex04.o
	
run: exercise
	./exercise

clear:
	rm -f replace_lower_case.o ex04.o
