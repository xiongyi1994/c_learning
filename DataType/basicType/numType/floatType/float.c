#include <stdio.h>
#include <float.h>

int main(int argc, char const *argv[])
{
	printf("float 最大值：%E\n", FLT_MIN);
	printf("float 最小值：%E\n", FLT_MAX);
	printf("float 精度值 %d\n", FLT_DIG);
	return 0;
}
