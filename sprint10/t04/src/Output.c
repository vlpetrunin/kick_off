#include "header.h"
int main(int argc, char const *argv[])
{
	char buff;
	int strings = 0;
	unsigned words = 0;
	int characters = 0;
	int state = 0;
	int total_strings = 0;
	unsigned total_words = 0;
	int total_characters = 0;
	if (argc == 1){
		while(read(0, &buff, 1)){ //sdsds hello \n
			if (buff == '\n')
			{
				strings++;
				state = 0;
			}
			else if (buff == ' ' || buff == '\n' || buff == '\t')
			{
				state = 0;
			}
			else if (state == 0)
			{
				state = 1;
				words++;
			}
			characters++;
		}
		mx_printchar('\t');
		mx_printint(strings);
		mx_printchar('\t');
		mx_printint(words);
		mx_printchar('\t');
		mx_printint(characters);
		mx_printchar('\n');
		return 0;
	}
	else{
		for (int i = 1; i < argc; ++i){
			char *string = mx_file_to_str(argv[i]);
			if (string == NULL)
			{
				mx_printstr("mx_wc: ");
				mx_printstr(argv[i]);
				mx_printstr(": open: ");
				char *error = strerror(errno);
				mx_printstr(error);
				return 0;
			}
			for (int a = 0; string[a] != '\0'; ++a)
			{
				if (string[a] == '\n')
				{
					strings++;
				}
				characters++;
			}
			words = mx_count_words(string);
			mx_printchar('\t');
			mx_printint(strings);
			mx_printchar('\t');
			mx_printint(words);
			mx_printchar('\t');
			mx_printint(characters);
			mx_printchar('\t');
			mx_printstr(argv[i]);
			mx_printchar('\n');
			total_strings += strings;
			total_words += words;
			total_characters += characters;
			strings = 0;
			words = 0;
			characters = 0;
		}
		mx_printchar('\t');
		mx_printint(total_strings);
		mx_printchar('\t');
		mx_printint(total_words);
		mx_printchar('\t');
		mx_printint(total_characters);
		mx_printchar('\t');
		mx_printstr("total");
		mx_printchar('\n');
	}
	return 0;
}
