#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	// define strings
	// Strings in C are actually arrays of characters

	char * name_1 = "xiongyi";

	char name_2[] = "zhangman";

	printf("%s\n", name_1); // -> xiongyi

	// string length
	printf("%lu\n", strlen(name_1)); // -> 7

	// string comparison
	if(strncmp(name_1,"xiongyi",7) == 0){
		printf("you are xiongyi\n");
	}else{
		printf("you are not xiongyi");
	}

	// string concatenation
	strncat(name_1,name_2,3);
	printf("%s\n", name_1);

	return 0;
}