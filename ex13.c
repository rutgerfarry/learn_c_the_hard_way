#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// go through each string in argv
	// q: why am I skipping argv[0]?
	// a: argv[0] is the name of the program
	for (i = 1; i < argc; i++) {
		printf("arg %d: %s\n", i, argv[i]);
	}

	// lets make our own array of strings
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;

	for (int i = 0; i < num_states; i ++) {
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}
