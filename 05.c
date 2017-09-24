#include <stdio.h>
#include <string.h>

int count_words(char *str) ;

int main(void) {
	char *s1 = " ricardo gomes ";
	char *s2 = "  ";
	char *s3 = "";
	char *s4 = "ahsahsh sashahsah asas as aqwew a";
	printf("'%s' -> %d word(s)\n", s1, count_words(s1));
	printf("'%s' -> %d word(s)\n", s2, count_words(s2));
	printf("'%s' -> %d word(s)\n", s3, count_words(s3));
	printf("'%s' -> %d word(s)\n", s4, count_words(s4));
	return 0;
}

int count_words(char *str) {
	int i = 0;
	int count_flag = 1;
	int str_length = strlen(str);
	int word_count = 0;
	
	while(i < str_length) {
		if(count_flag == 1 && str[i] != ' ') {
			word_count++;
			count_flag = 0;
		}
		
		if(str[i] == ' ') {
			count_flag = 1;
		}
		i++;
	}
	return word_count;
}
