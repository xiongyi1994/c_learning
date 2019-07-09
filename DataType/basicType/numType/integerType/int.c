#include <stdio.h>

int main(int argc, char const *argv[])
{
	/*
		整型 占四个字节 32位 最高位代表符号位
	*/
	printf("int型所占用的字节大小: %lu\n", sizeof(int));
	return 0;
}