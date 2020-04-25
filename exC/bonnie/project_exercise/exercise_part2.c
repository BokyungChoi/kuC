#include <stdio.h>

int read_string(void) {
	
	char str[50] = "I like Jason";
	printf("string: %s \n", str);
	
	str[8] = '\0';
	printf("string: %s \n", str);

	str[4] = '\0';
	printf("string: %s \n", str);

	return 0;
}