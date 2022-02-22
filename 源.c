#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
size_t my_strlen(const char* parr)
{
	assert(parr != NULL);
	size_t count = 0;
	while (*parr)
	{
		parr++;
		count++;
	}
	return count;
}
int main(void)
{
	char* parr = "abc";
	int len = my_strlen("1234567");
	printf("%d", len);

	return 0;
}