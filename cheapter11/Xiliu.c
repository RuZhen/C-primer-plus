#include<stdio.h>
#define MAXLEN 10

int main()
{
	char word [MAXLEN];
	puts("Good morning Xiao Liu");
	puts("Don't be worry");
   
	while (fgets(word, MAXLEN, stdin) != NULL && word[0] != '\0')
	{
		
		fputs(word, stdout);
	}
	return 0;
}
