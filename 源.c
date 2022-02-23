#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* dst, const char* src)
{
	assert(dst && src);
	char* cp = dst;
	while (*cp)
		cp++;
	while (*cp++ = *src++);
	return (dst);
}
int main(void)
{
	char arr1[] = "hello \0xxxxxx";
	char arr2[] = "world";
	printf("%s", my_strcat(arr1, arr2));


	return 0;
}