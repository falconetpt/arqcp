exercise: ex11.o replace_lower_case.o palindrome.o
	gcc ex11.o replace_lower_case.o palindrome.o -o exercise

ex11.o:
	gcc -c ex11.c -o ex11.o

replace_lower_case.o:
	gcc -c replace_lower_case.c -o replace_lower_case.o

palindrome.o:
	gcc -c palindrome.c -o palindrome.o

run: exercise
	./exercise

clear:
	rm -f ex11.o replace_lower_case.o palindrome.o
