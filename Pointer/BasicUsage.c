#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 1;
	int * point_to_a = &a;
	printf("%d\n", *point_to_a);
	return 0;
}